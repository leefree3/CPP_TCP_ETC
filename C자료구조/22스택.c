#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#define SIZE 10000
#define INF 99999999 //���Ѵ�

////���Ḯ��Ʈ�� Ȱ���� stack 
//typedef struct {
//	int data;
//	struct Node* next;//���� ��带 ����ų �� �ִ� ������
//}Node;
//
//typedef struct {
//	Node* top; //���� ����ü (������ �� ��� ���)
//}Stack;
//
////���û����Լ�
//void push(Stack* stack, int data) {//������ ���� ���, data �ֱ�
//	Node* node = (Node*)malloc(sizeof(Node)); //�ϳ��� ��尡 �� ������ �Ҵ�
//	node->data = data; //����� data�� �ְ��� �ϴ� data
//	node ->next = stack->top; //node�� next���� ���� stack�� top�� ������ �Ѵ�.
//	stack->top = node; //stack�� top�� node�� ��ü�� �ش�.
//}
//
////���� ���� ����
//int pop(Stack* stack) {
//	if (stack->top == NULL) { // ���� ������ ����ִٸ�
//		printf("���� ��� �÷ο찡 �߻��߽��ϴ�. \n");
//		return -INF; //������ �߻����� �˷���
//	}
//	Node* node = stack->top;//���� �ֻ�� ��带 ��� ��忡 ��Ƶ״ٰ�
//	int data = node->data; //������ ����
//	stack->top = node->next; //stack�� top �� �ι�° ��尡 �ǵ���
//	free(node);//�޸� ����
//	return data;
//}
//
//// ���� ��ü ��� �Լ�
//void show(Stack* stack) {
//	Node* cur = stack->top;
//	printf("--- ������ �ֻ�� ---\n");
//	while (cur != NULL) {
//		printf("%d\n", cur->data);
//		cur = cur->next;
//	}
//	printf("--- ������ ���ϴ� ---\n");
//}
//
//
//int main(void) {
//	Stack s;
//	s.top = NULL;
//	//ó�� top���� �ݵ�� NULL�� �־���Ѵ�.
//	//����÷ο쳪 loop���� üũ �� �� �ִ�.
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



// �迭�� �̿��� stakc ����
////���� ����
//int stack[SIZE];
//int top = -1; //������ �Ա�, �ֻ��
//
////���� ���� �Լ�
//void push(int data) {
//	if (top == SIZE - 1) {
//		printf("���� �����÷ο찡 �߻��߽��ϴ�. \n");
//		return;
//	}
//	stack[++top] = data;
//}
//
////���� ���� �Լ�
//void pop() {
//	if (top == -1) {
//		printf("���� ��� �÷ο찡 �߻��߽��ϴ�. \n");
//		return -INF; //-���Ѵ� => �����߻� �� ���� �߻��� �˷���.
//	}
//	return stack[--top]; //������ ���ٸ� --top
//}
////���� ��ü ��� �Լ�
//void show() {
//	printf("--- ������ �� ��� ---\n");
//	for (int i = top; i >= 0; i--) {
//		printf("%d\n", stack[i]);
//	}
//	printf("--- ������ ���ϴ� --- \n");
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
