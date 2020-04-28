#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#define SIZE 10000
#define INF 99999999 //무한대

////연결리스트를 활용한 stack 
//typedef struct {
//	int data;
//	struct Node* next;//다음 노드를 가리킬 수 있는 포인터
//}Node;
//
//typedef struct {
//	Node* top; //스택 구조체 (스택의 최 상단 노드)
//}Stack;
//
////스택삽입함수
//void push(Stack* stack, int data) {//삽입할 스택 명시, data 넣기
//	Node* node = (Node*)malloc(sizeof(Node)); //하나의 노드가 들어갈 공간을 할당
//	node->data = data; //노드의 data에 넣고자 하는 data
//	node ->next = stack->top; //node의 next에는 현재 stack의 top이 들어가도록 한다.
//	stack->top = node; //stack의 top을 node로 교체해 준다.
//}
//
////스택 추출 과정
//int pop(Stack* stack) {
//	if (stack->top == NULL) { // 현재 스택이 비어있다면
//		printf("스택 언더 플로우가 발생했습니다. \n");
//		return -INF; //문제가 발생함을 알려줌
//	}
//	Node* node = stack->top;//현재 최상단 노드를 잠시 노드에 담아뒀다가
//	int data = node->data; //데이터 추출
//	stack->top = node->next; //stack의 top 이 두번째 노드가 되도록
//	free(node);//메모리 해제
//	return data;
//}
//
//// 스택 전체 출력 함수
//void show(Stack* stack) {
//	Node* cur = stack->top;
//	printf("--- 스택의 최상단 ---\n");
//	while (cur != NULL) {
//		printf("%d\n", cur->data);
//		cur = cur->next;
//	}
//	printf("--- 스택의 최하단 ---\n");
//}
//
//
//int main(void) {
//	Stack s;
//	s.top = NULL;
//	//처음 top에는 반드시 NULL을 넣어야한다.
//	//언더플로우나 loop문을 체크 할 수 있다.
//	show(&s);
//
//	push(&s, 7);
//	push(&s, 5);
//	push(&s, 4);
//	pop(&s);
//	push(&s, 6);
//	pop(&s);
//	show(&s);
//	system("pause");
//	return 0;
//}
//



// 배열을 이용한 stakc 구현
////스택 선언
//int stack[SIZE];
//int top = -1; //스택의 입구, 최상단
//
////스택 삽입 함수
//void push(int data) {
//	if (top == SIZE - 1) {
//		printf("스택 오버플로우가 발생했습니다. \n");
//		return;
//	}
//	stack[++top] = data;
//}
//
////스택 추출 함수
//void pop() {
//	if (top == -1) {
//		printf("스택 언더 플로우가 발생했습니다. \n");
//		return -INF; //-무한대 => 오류발생 시 오류 발생을 알려줌.
//	}
//	return stack[--top]; //오류가 없다면 --top
//}
////스택 전체 출력 함수
//void show() {
//	printf("--- 스택의 최 상단 ---\n");
//	for (int i = top; i >= 0; i--) {
//		printf("%d\n", stack[i]);
//	}
//	printf("--- 스택의 최하단 --- \n");
//}
//int main(void) {
//	push(7);
//	push(5);
//	push(4);
//	pop();
//	push(6);
//	pop();
//	show();
//	system("pause");
//	return 0;
//}
//
