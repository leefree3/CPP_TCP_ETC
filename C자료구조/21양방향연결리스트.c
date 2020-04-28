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
//	Node* node = (Node*)malloc(sizeof(Node)); //하나의 노드가 들어갈 공간 할당
//	node->data = data; //데이터 값 초기화
//	Node* cur; //cur 노드가 들어갈 위치 지정
//	cur = head->next; //첫번 째 원소
//
//	while (cur->data <data && cur !=tail){ //내가 담고자 하는 data가 클때 혹은 마지막 원소까지만
//		cur = cur->next;
//	}
//	Node* prev = cur->prev; //삽입할 위치의 압쪽 노드를 prev
//	prev->next = node; //앞에 있는 노드의 넥스트가 현재 삽입할 노드
//	node->prev = prev; //앞쪽 노드
//	cur->prev = node; //뒷쪽 노드의 prev가 node가 되고
//	node->next = cur; //삽입할 노드의 뒤에 들어갈 노드가 될 수 있도록 한다.
//}
//
////양방향 연결 리스트 삭제 함수
//void removeFront() {
//	Node* node = head->next;
//	head->next = node->next; // node가 다음 노드를 가리키도록 설정하겠다는 의미
//	Node* next = node->next; //
//	next->prev = head;
//	free(node);
//}
////양방향 연결 리스트 전체 출력 함수
//void show() {
//	Node* cur = head->next;
//	while (cur != tail)
//	{
//		printf("%d", cur->data);
//		cur = cur->next;
//	}
//}
//
////완성된 양방향 연결 리스트 사용하기
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
