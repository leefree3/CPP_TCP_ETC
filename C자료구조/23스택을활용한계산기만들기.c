#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF 99999999
/*
typedef struct Node{
	char data[100]; //�ϳ��� ���ڿ��� ���� �� �ֵ��� �Ѵ�.
	struct Node *next; //���� ���� �̾��� �� �ֵ��� next ����Ʈ 
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
		printf("���� ��� �÷ο찡 �߻� �߽��ϴ�.\n");
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

//���� ǥ������� ��ȯ - �켱���� �Լ� �����
int getPriority(char *i) {
	if (!strcmp(i, "(")) return 0; //�켱������ ���� ����.
	if (!strcmp(i, "+") || !strcmp(i, "-")) return 1;
	if (!strcmp(i, "*") || !strcmp(i, "/")) return 2;
	return 3;
}

char* transition(Stack *stack, char **s, int size) {
	//��ȯ �������� �ϳ��� stack�� ���ȴ�.
	//char **s: �Էµ� ���ڵ��� ������ ���� �迭
	//��: 37+5 => ["37", "+", "5"]
	//int size: ������ ���ڿ��� ����
	char res[1000] = "";
	//res: ����ǥ������� �ٲ� ���ڿ�
	for (int i = 0; i < size; i++) { //���ڿ��� ���캸�鼭
		//�ش� ���ڰ� �����ڶ��,
		if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
			//������(�ڽ�) �켱�������� ���ÿ켱������ ���� ��
			while (stack->top != NULL && getPriority(getTop(stack)) >= getPriority(s[i])) {
				//�ش��ϴ� �ֵ��� stack���� ��� ���� �ڿ�
				strcat(res, pop(stack)); //���ÿ��� ���� ���ڿ��� ����ǥ������� �ٲ� ���ڿ��� �ִ´�
				strcat(res, " "); // �� �ڿ� ��ĭ �پ�⸦ �� => 3+ 5 => 3 5 +
			}
			//�ڽ��� ���ÿ� �ִ´�.
			push(stack, s[i]); 
		}
		else if (!strcmp(s[i], "(")) push(stack, s[i]); //���� ��ȣ�� ��� ���ÿ� ��´�
		else if (!strcmp(s[i], ")")) { //�ݴ� ��ȣ�� ���
			while (strcmp(getTop(stack), "(")) { //���°�ȣ�� ���ö�����
				strcat(res, pop(stack)); //���ÿ��� �̾Ƽ� ��� �迭(res)�� ��´�.
				strcat(res, " ");
			}
			pop(stack);//pop�� �����ν� ���� ��ȣ�� ���� �� �ְ� �ȴ�..(?)
		}
		else { strcat(res, s[i]); strcat(res, " "); }//�Ϲ� ������ ��쿣 ���
	}
	while (stack->top != NULL)
	{
		strcat(res, pop(stack));
		strcat(res, " ");//���ÿ� �����ִ� ���Ұ� �ִٸ� �� ������.
	}
	return res;
}

void calculate(Stack *stack, char **s, int size) {
	int x, y, z;
	for (int i = 0; i < size; i++) {
		if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
			x = atoi(pop(stack)); //atoi : ���ڿ��� ������ ��ȯ�ϴ� �Լ�
			y = atoi(pop(stack));
			if (!strcmp(s[i], "+")) z = y + x; //y�� x���� ���� ���� ������ y�� �տ� ���´�.
			if (!strcmp(s[i], "-")) z = y - x;
			if (!strcmp(s[i], "*")) z = y * x;
			if (!strcmp(s[i], "/")) z = y / x;
			char buffer[100];
			sprintf(buffer, "%d", z);//sprintf : �������¸� �ٽ� �������·� ���
			push(stack, buffer);
		}
		else {
			push(stack, s[i]);
		}
	}
	printf("%s \n", pop(stack));
}


int main(void) {
	Stack stack; //�Ѱ��� ���� ������ /�ʱ�ȭ
	stack.top = NULL;
	//char a[100] = "( ( 3 + 4 ) * 5 ) - 5 * 7 * 5 - 5 * 10"; //����ϰ��� �ϴ� ����
	char a[100] = "1823 + 1293 - ( 123 * 230 )";
	int size = 1; //size�� 1���� ��� , size�� ������ ���ڿ��� ����
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == ' ') size++;
	}//���Ⱑ ���� �� ���� size�� �����ش�.
	char* ptr = strtok(a, " "); //string token�� �̿��ؼ�, ����� ���ڸ� �и�.
	char** input = (char**)malloc(sizeof(char*) * size);//����ǥ����� �ְ��� �ϴ� �Է°��� ����
	for (int i = 0; i < size; i++) {
		input[i] = (char*)malloc(sizeof(char) * 100); //���� ���ڿ��� �ִ� 100������ ũ�⸸ ���
	}
	for (int i = 0; i < size; i++) {
		strcpy(input[i], ptr); //��ū���� �и��ߴ� ���� ��� input�� ����ش�.
		ptr = strtok(NULL, " "); //���⸦ ���� ���� ���ڿ��� �迭�� ���·� ��Ƶ�.
	}
	char b[1000] = "";
	strcpy(b, transition(&stack, input, size)); //input�� ����ǥ������� �ٲپ ����� b�� ����.
	printf("���� ǥ���: %s\n", b); 
	
	size = 1;
	for (int i = 0; i < strlen(b) - 1; i++) { // �������� �׻� ������ ���Ƿ� 1�� ����
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