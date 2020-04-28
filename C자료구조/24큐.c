#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999
//#define SIZE 10000

/*
//연결리스트로 만들어보기
//큐의 선언
typedef struct {
	int data;
	struct Node* next;
}Node;

typedef struct{
	Node *front;
	Node *rear;
	int count;
} Queue;

// 큐 삽입 함수
void push(Queue* queue, int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	//초기 세팅
	if (queue->count == 0) {
		queue->front = node;
	}
	else {
		queue->rear->next = node; //rear의 다음 노드로 연결
	}
	queue->rear = node; //삽입된 노드가 rear가 됨
	queue->count++;
}

// 큐 추출 함수
void pop(Queue* queue) {
	if (queue->count == 0) {
		printf("언더플로우가 발생했습니다!\n");
		return -INF;
	}
	Node* node = queue->front;
	int data = node->data;
	queue->front = node->next;//queue의 프론트가 다음 노드를 가르킬 수 있도록
	free(node); //메모리 해제
	queue->count--;
	return data;
}

//큐 출력함수
void show(Queue *queue) {
	Node* cur = queue->front;
	printf("---큐의 앞 ---\n");
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("---큐의 뒤 ---\n");
}

int main(void) {
	Queue queue;
	queue.front = queue.rear = NULL;
	queue.count = 0;

	push(&queue, 7);
	push(&queue, 5);
	push(&queue, 4);
	pop(&queue);
	push(&queue, 6);
	pop(&queue);
	show(&queue);
	
	system("pause");
	return 0;
}


*/






/*
//배열을 이용한 Queue
int queue[SIZE];
int front = 0;
int rear = 0;

//큐 삽입함수
void push(int data) {
	if (rear >= SIZE) {
		printf("큐 오버플로우가 발생했습니다. \n");
		return;
	}
	queue[rear++] = data;
}

//큐 추출함수
void pop() {
	if (front == rear) {
		printf("큐 언더플로우가 발생했습니다. \n");
		return -INF;
	}
	return queue[front++];
}

//큐 전체 출력함수
void show() {
	printf("---큐의 앞 --- \n");
	for (int i = front; i < rear; i++) {
		printf("%d\n", queue[i]);
	}
	printf("---큐의 뒤 --- \n");
}

//완성된 큐를 사용하기
int main(void) {
	push(7);
	push(5);
	push(4);
	pop();
	push(6);
	pop();
	show();
	system("pause");
	return 0;
}

*/