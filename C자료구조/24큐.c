#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999
//#define SIZE 10000

/*
//���Ḯ��Ʈ�� ������
//ť�� ����
typedef struct {
	int data;
	struct Node* next;
}Node;

typedef struct{
	Node *front;
	Node *rear;
	int count;
} Queue;

// ť ���� �Լ�
void push(Queue* queue, int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	//�ʱ� ����
	if (queue->count == 0) {
		queue->front = node;
	}
	else {
		queue->rear->next = node; //rear�� ���� ���� ����
	}
	queue->rear = node; //���Ե� ��尡 rear�� ��
	queue->count++;
}

// ť ���� �Լ�
void pop(Queue* queue) {
	if (queue->count == 0) {
		printf("����÷ο찡 �߻��߽��ϴ�!\n");
		return -INF;
	}
	Node* node = queue->front;
	int data = node->data;
	queue->front = node->next;//queue�� ����Ʈ�� ���� ��带 ����ų �� �ֵ���
	free(node); //�޸� ����
	queue->count--;
	return data;
}

//ť ����Լ�
void show(Queue *queue) {
	Node* cur = queue->front;
	printf("---ť�� �� ---\n");
	while (cur != NULL) {
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("---ť�� �� ---\n");
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
//�迭�� �̿��� Queue
int queue[SIZE];
int front = 0;
int rear = 0;

//ť �����Լ�
void push(int data) {
	if (rear >= SIZE) {
		printf("ť �����÷ο찡 �߻��߽��ϴ�. \n");
		return;
	}
	queue[rear++] = data;
}

//ť �����Լ�
void pop() {
	if (front == rear) {
		printf("ť ����÷ο찡 �߻��߽��ϴ�. \n");
		return -INF;
	}
	return queue[front++];
}

//ť ��ü ����Լ�
void show() {
	printf("---ť�� �� --- \n");
	for (int i = front; i < rear; i++) {
		printf("%d\n", queue[i]);
	}
	printf("---ť�� �� --- \n");
}

//�ϼ��� ť�� ����ϱ�
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