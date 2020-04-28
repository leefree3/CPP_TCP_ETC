/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999
#define MAX_SIZE 1001

typedef struct {
	int index;
	struct Node *next;
}Node;

typedef struct{
	Node *front;
	Node *rear;
	int count;
}Queue;

Node** a;
int n, m, c[MAX_SIZE];

//연결리스트 삽입함수
void addFront(Node *root, int index) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->index = index;
	node->next = root->next;
	root->next = node;
}

//큐삽입함수
//특정한 큐에 어떤 index를 담는다.
//queue가 비어있다면 queue의 front에 node를 넣는다.
//그렇지 않다면, queue의 꼬리부분에 넣어주면 된다.
//결과적으로 queue의 꼬리에는 node가 들어간다.
//queue의 count를 증가시키면 된다.
void queuePush(Queue *queue, int index) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->index = index;
	node-> next = NULL;
	if (queue->count == 0) {
		queue->front = node;
	}
	else {
		queue->rear->next = node;
	}
	queue->rear = node;
	queue->count++;
}

//큐 추출함수
int queuePop(Queue *queue) {
	if (queue->count == 0) {
		printf("큐 언더 플로우가 발생했습니다\n");
		return -INF;
	}
	Node *node = queue->front;
	int index = node->index;
	queue->front = node->next;
	free(node);
	queue->count--;
	return index;
}

//너비우선탐색 함수
//특정한 위치에서 시작할 때
//q를 초기화해준다.
//시작하는 인덱스를 넣어준다.
//해당 노드를 방문 했다는 방문처리를 한다.
//queue가 빌 때까지 계속 반복
//queue에 담긴 하나의 원소를 뽑는다.
//방문한 원소는 출력한다.
//원소에 연결된 노드를 확인하면서 
//인접한 노드에 방문했는지 여부에 따라 queue에 넣을지 않넣을지 고rmfsk.
//인접한 노드 확인하고 방문하지 않은 상태라면, queue에 넣는다. 그다음 방문처리.
// 이 후 모든노드에 방문 할 수 있도록 하면 된다.
void bfs(int start) {
	Queue q;
	q.front = q.rear = NULL;
	q.count = 0;
	queuePush(&q, start);
	c[start] = 1;
	while (q.count !=0 ){
		int x = queuePop(&q);
		printf("%d ", x);
		Node *cur = a[x]->next;
		while (cur != NULL) {
			int next = cur->index;
			if (!c[next]) {
				queuePush(&q, next);
				c[next] = 1;
			}
			cur = cur->next;
		}
	}
}

//정점의 갯수, 간선의 갯수 입력받기
//동적할당 수행(MAX_SIZE만큼)
//1~n까지의 정점에 대해서, 초기화를 해준다.
int main(void) {
	scanf("%d %d", &n, &m);
	a = (Node**)malloc(sizeof(Node*) * (MAX_SIZE));
	for (int i = 1; i <= n ; i++) {
		a[i] = (Node*)malloc(sizeof(Node));
		a[i]->next = NULL;
	}
	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		addFront(a[x], y);
		addFront(a[y], x);
	}
	bfs(1);
	system("pause");
	return 0;
}

*/