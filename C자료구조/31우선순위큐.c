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



//우선순위 큐의 삽입
//삽입할 원소는 완전 이진트리를 유지하는 형태로 순차적으로 삽입됨
void push(priorityQueue* pq, int data) {
	if (pq->count >= MAX_SIZE) return;
	
	//pq->count: 완전 이진트리의 마지막 값
	//heap[pq->count]: 완전 이진트리의 마지막 인덱스에 데이터가 들어감.
	pq->heap[pq->count] = data; 
	
	//현재 삽입된 data의 인덱스를 now
	int now = pq->count;
	//삽입된 인덱스 -1값을 2로 나눈 버림값이 부모의 index값이 된다.(계산해보기!)
	int parent = (pq->count-1)/2;

	while (now > 0 && pq->heap[now] > pq->heap[parent]) {
		//자신의 값이 부모보다 크다면 swap한다.
		swap(&pq->heap[now], &pq->heap[parent]);
		//다시 부모의 위치에서 heap이 시작될 수 이ㅆ도록 함.
		now = parent;
		parent = (parent - 1) / 2;
	}
	pq->count++;
}

//우선순위 큐의 추출
int pop(priorityQueue *pq){
	if (pq->count <= 0) return -9999;
	int res = pq->heap[0];
	pq->count--;
	pq->heap[0] = pq->heap[pq->count]; //마지막 원소를 루트노드에 담는다.
	int now = 0, leftChild = 1, rightChild = 2;
	int target = now; //맨 처음에는 자기 자신을 가리킴

	// 새 원소를 추출한 이후에 하향식으로 힙을 구성합니다.
	while (leftChild < pq->count) {
		if (pq->heap[target] < pq->heap[leftChild] ) target = leftChild;
		if (pq->heap[target] < pq->heap[rightChild] && rightChild < pq->count) target = rightChild;
		if (target == now)break;
		else {
			swap(&pq->heap[now], &pq->heap[target]);//swap 후에 하향식으로 값이 내려가야 하기 때문에.
			now = target;
			leftChild = now * 2 + 1;
			rightChild = now * 2 + 2;
		}
	}
	return res;
}

//우선순위 큐의 사용
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