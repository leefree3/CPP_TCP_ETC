/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1001

typedef struct {
	int index;
	struct Node* next;
}Node;

Node** a;
int n, m, c[MAX_SIZE];

//c: 현재 방문을 했는지 체크하는 변수
//n: 정점, m: 간선

//삽입함수
void addFront(Node *root, int index) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->index = index;
	node->next = root->next;
	root->next = node;
}

//깊이 우선탐색 함수
//특정 x index의 노드에서 깊이우선탐색을 수행할 수 있도록 할 수 있다.
//현재 있던 위치에 방문한적이 있다면 바로 return 수행
//이후 해당 노드를 방문했다고 방문처리를 함(1).
//해당 노드를 출력.
//해당 노드에 연결된 노드들을 하나씩 확인
//NULL값이 아닐 때까지 방문 => 모든 원소를 방문 할 수 있음.
//연결된 다음 노드를 확인해서, 해당 노드에서 재귀적으로 호출해서, 방문하지 않았다면 그 함수를 기준으로 계속 탐색.

void dfs(int x) {
	if (c[x]) return;
	c[x] = 1;
	printf("%d ",x);
	Node* cur = a[x]->next;
	while (cur != NULL) {
		int next = cur->index;
		dfs(next);
		cur = cur->next;
	}
}

//정점, 간선 차례로 입력받는다.
//정점이 여러개니까 정점의 갯수만큼 할당할 수 있도록 한다.
//정점까지만 초기화(자리할당, NULL) 한다.
//간선의 갯수만큼 반복
//x와 y 연결
//원소 1부터 시작하는 test를 한다.
int main(void) {
	scanf("%d %d", &n, &m);
	a = (Node**)malloc(sizeof(Node*) * (MAX_SIZE));
	for (int i = 1; i <= n; i++) {
		a[i] = (Node*)malloc(sizeof(Node));
		a[i] -> next = NULL;
	}
	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		addFront(a[x], y);
		addFront(a[y], x);
	}
	dfs(1);
	system("pause");
	return 0;
}
*/