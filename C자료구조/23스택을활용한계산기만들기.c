#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF 99999999
/*
typedef struct Node{
	char data[100]; //하나의 문자열을 담을 수 있도록 한다.
	struct Node *next; //다음 노드로 이어질 수 있도록 next 포인트 
}Node;

typedef struct{
	Node *top; 
}Stack;

void push(Stack *stack, char *data) {
	Node *node = (Node*)malloc(sizeof(Node));
	strcpy(node->data, data);
	node->next = stack->top;
	stack->top = node;
}

char* getTop(Stack *stack) {
	Node *top = stack->top;
	return top->data;
}

char* pop(Stack* stack) {
	if (stack->top == NULL) {
		printf("스택 언더 플로우가 발생 했습니다.\n");
		return NULL;
		//return -INF;
	}
	Node *node = stack->top;
	char *data = (char*)malloc(sizeof(char) * 100);
	strcpy(data, node->data);
	stack->top = node->next;
	free(node);
	return data;
}

//후위 표기법으로 변환 - 우선순위 함수 만들기
int getPriority(char *i) {
	if (!strcmp(i, "(")) return 0; //우선순위가 가장 낮다.
	if (!strcmp(i, "+") || !strcmp(i, "-")) return 1;
	if (!strcmp(i, "*") || !strcmp(i, "/")) return 2;
	return 3;
}

char* transition(Stack *stack, char **s, int size) {
	//변환 과정에는 하나의 stack이 사용된다.
	//char **s: 입력된 문자들이 나뉘어 들어온 배열
	//예: 37+5 => ["37", "+", "5"]
	//int size: 들어오는 문자열의 갯수
	char res[1000] = "";
	//res: 후위표기법으로 바뀐 문자열
	for (int i = 0; i < size; i++) { //문자열을 살펴보면서
		//해당 문자가 연산자라면,
		if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
			//연산자(자신) 우선순위보다 스택우선순위가 높을 때
			while (stack->top != NULL && getPriority(getTop(stack)) >= getPriority(s[i])) {
				//해당하는 애들을 stack에서 모두 뽑은 뒤에
				strcat(res, pop(stack)); //스택에서 뽑은 문자열을 후위표기법으로 바뀐 문자열에 넣는다
				strcat(res, " "); // 그 뒤에 한칸 뛰어쓰기를 함 => 3+ 5 => 3 5 +
			}
			//자신의 스택에 넣는다.
			push(stack, s[i]); 
		}
		else if (!strcmp(s[i], "(")) push(stack, s[i]); //여는 괄호일 경우 스택에 담는다
		else if (!strcmp(s[i], ")")) { //닫는 괄호일 경우
			while (strcmp(getTop(stack), "(")) { //여는괄호가 나올때까지
				strcat(res, pop(stack)); //스택에서 뽑아서 결과 배열(res)에 담는다.
				strcat(res, " ");
			}
			pop(stack);//pop을 함으로써 여는 괄호가 나올 수 있게 된다..(?)
		}
		else { strcat(res, s[i]); strcat(res, " "); }//일반 숫자일 경우엔 출력
	}
	while (stack->top != NULL)
	{
		strcat(res, pop(stack));
		strcat(res, " ");//스택에 남아있는 원소가 있다면 다 꺼내줌.
	}
	return res;
}

void calculate(Stack *stack, char **s, int size) {
	int x, y, z;
	for (int i = 0; i < size; i++) {
		if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
			x = atoi(pop(stack)); //atoi : 문자열을 정수로 변환하는 함수
			y = atoi(pop(stack));
			if (!strcmp(s[i], "+")) z = y + x; //y가 x보다 먼저 들어갔기 때문에 y가 앞에 나온다.
			if (!strcmp(s[i], "-")) z = y - x;
			if (!strcmp(s[i], "*")) z = y * x;
			if (!strcmp(s[i], "/")) z = y / x;
			char buffer[100];
			sprintf(buffer, "%d", z);//sprintf : 숫자형태를 다시 문자형태로 출력
			push(stack, buffer);
		}
		else {
			push(stack, s[i]);
		}
	}
	printf("%s \n", pop(stack));
}


int main(void) {
	Stack stack; //한개의 스택 정의함 /초기화
	stack.top = NULL;
	//char a[100] = "( ( 3 + 4 ) * 5 ) - 5 * 7 * 5 - 5 * 10"; //계산하고자 하는 수식
	char a[100] = "1823 + 1293 - ( 123 * 230 )";
	int size = 1; //size는 1부터 출발 , size는 각각의 문자열의 갯수
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == ' ') size++;
	}//띄어쓰기가 나올 때 마다 size를 더해준다.
	char* ptr = strtok(a, " "); //string token을 이용해서, 띄어쓰기로 문자를 분리.
	char** input = (char**)malloc(sizeof(char*) * size);//후위표기법에 넣고자 하는 입력값을 마련
	for (int i = 0; i < size; i++) {
		input[i] = (char*)malloc(sizeof(char) * 100); //각각 문자열은 최대 100까지의 크기만 허용
	}
	for (int i = 0; i < size; i++) {
		strcpy(input[i], ptr); //토큰으로 분리했던 값을 계속 input에 담아준다.
		ptr = strtok(NULL, " "); //띄어쓰기를 빼고 각각 문자열을 배열의 형태로 담아둠.
	}
	char b[1000] = "";
	strcpy(b, transition(&stack, input, size)); //input을 후위표기법으로 바꾸어서 결과를 b에 담음.
	printf("후위 표기법: %s\n", b); 
	
	size = 1;
	for (int i = 0; i < strlen(b) - 1; i++) { // 마지막은 항상 공백이 들어가므로 1을 빼기
		if (b[i] == ' ') size++;
	}
	char* ptr2 = strtok(b, " ");
	for (int i = 0; i < size; i++) {
		strcpy(input[i], ptr2);
		ptr2 = strtok(NULL, " ");
	}
	calculate(&stack, input, size);
	system("pause");
	return 0;
}
*/