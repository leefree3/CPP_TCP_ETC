//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	int data;
//	struct Node *prev;
//	struct Node *next;
//}Node;
//
//Node *head, *tail;
//
//void insert(int data) {
//	Node* node = (Node*)malloc(sizeof(Node)); //�ϳ��� ��尡 �� ���� �Ҵ�
//	node->data = data; //������ �� �ʱ�ȭ
//	Node* cur; //cur ��尡 �� ��ġ ����
//	cur = head->next; //ù�� ° ����
//
//	while (cur->data <data && cur !=tail){ //���� ����� �ϴ� data�� Ŭ�� Ȥ�� ������ ���ұ�����
//		cur = cur->next;
//	}
//	Node* prev = cur->prev; //������ ��ġ�� ���� ��带 prev
//	prev->next = node; //�տ� �ִ� ����� �ؽ�Ʈ�� ���� ������ ���
//	node->prev = prev; //���� ���
//	cur->prev = node; //���� ����� prev�� node�� �ǰ�
//	node->next = cur; //������ ����� �ڿ� �� ��尡 �� �� �ֵ��� �Ѵ�.
//}
//
////����� ���� ����Ʈ ���� �Լ�
//void removeFront() {
//	Node* node = head->next;
//	head->next = node->next; // node�� ���� ��带 ����Ű���� �����ϰڴٴ� �ǹ�
//	Node* next = node->next; //
//	next->prev = head;
//	free(node);
//}
////����� ���� ����Ʈ ��ü ��� �Լ�
//void show() {
//	Node* cur = head->next;
//	while (cur != tail)
//	{
//		printf("%d", cur->data);
//		cur = cur->next;
//	}
//}
//
////�ϼ��� ����� ���� ����Ʈ ����ϱ�
//int main(void) {
//	head = (Node*)malloc(sizeof(Node));
//	tail = (Node*)malloc(sizeof(Node));
//	head->next = tail;
//	head->prev = head;
//	tail->next = tail;
//	tail->prev = head;
//	insert(2);
//	insert(1);
//	insert(3);
//	insert(9);
//	insert(7);
//	removeFront();
//	show();
//	system("pause");
//	return 0;
//}
//
