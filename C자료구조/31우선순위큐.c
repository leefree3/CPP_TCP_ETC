#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 10000
/*
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

typedef struct {
	int heap[MAX_SIZE];
	int count;
}priorityQueue;



//�켱���� ť�� ����
//������ ���Ҵ� ���� ����Ʈ���� �����ϴ� ���·� ���������� ���Ե�
void push(priorityQueue* pq, int data) {
	if (pq->count >= MAX_SIZE) return;
	
	//pq->count: ���� ����Ʈ���� ������ ��
	//heap[pq->count]: ���� ����Ʈ���� ������ �ε����� �����Ͱ� ��.
	pq->heap[pq->count] = data; 
	
	//���� ���Ե� data�� �ε����� now
	int now = pq->count;
	//���Ե� �ε��� -1���� 2�� ���� �������� �θ��� index���� �ȴ�.(����غ���!)
	int parent = (pq->count-1)/2;

	while (now > 0 && pq->heap[now] > pq->heap[parent]) {
		//�ڽ��� ���� �θ𺸴� ũ�ٸ� swap�Ѵ�.
		swap(&pq->heap[now], &pq->heap[parent]);
		//�ٽ� �θ��� ��ġ���� heap�� ���۵� �� �̤����� ��.
		now = parent;
		parent = (parent - 1) / 2;
	}
	pq->count++;
}

//�켱���� ť�� ����
int pop(priorityQueue *pq){
	if (pq->count <= 0) return -9999;
	int res = pq->heap[0];
	pq->count--;
	pq->heap[0] = pq->heap[pq->count]; //������ ���Ҹ� ��Ʈ��忡 ��´�.
	int now = 0, leftChild = 1, rightChild = 2;
	int target = now; //�� ó������ �ڱ� �ڽ��� ����Ŵ

	// �� ���Ҹ� ������ ���Ŀ� ��������� ���� �����մϴ�.
	while (leftChild < pq->count) {
		if (pq->heap[target] < pq->heap[leftChild] ) target = leftChild;
		if (pq->heap[target] < pq->heap[rightChild] && rightChild < pq->count) target = rightChild;
		if (target == now)break;
		else {
			swap(&pq->heap[now], &pq->heap[target]);//swap �Ŀ� ��������� ���� �������� �ϱ� ������.
			now = target;
			leftChild = now * 2 + 1;
			rightChild = now * 2 + 2;
		}
	}
	return res;
}

//�켱���� ť�� ���
int main(void) {
	int n, data;
	scanf("%d", &n);
	priorityQueue pq;
	pq.count = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &data);
		push(&pq, data);
	}
	for (int i = 0; i < n; i++) {
		int data = pop(&pq);
		printf("%d ", data);
	}
	system("pause");
	return 0;
}
*/