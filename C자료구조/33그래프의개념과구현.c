/*
//스택기반의 연결리스트
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int index; //어떤 인덱스로
	int distance; //가중치(거리)
	struct Node* next; //다음 노드 기록
}Node;

void addFront(Node* root, int index, int distance) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->index = index;
	node->distance = distance;
	node->next = root->next;
	root->next = node;
}

void showAll(Node* root) {
	Node* cur = root->next;
	while (cur != NULL) {
		printf("%d(거리: %d) ", cur->index, cur->distance); //어떤 원소까지가고, 가중치가 얼마인디 알려준다.
		cur = cur->next;
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m); //간선의 갯수 입력받음
	
	//노드의 갯수만큼 연결리스트 필요하므로 n+1(각 인덱스가 1부터 출발한다고 가정했기 때문)
	Node** a = (Node**)malloc(sizeof(Node*) * (n + 1)); 
	for (int i = 1; i <= n; i++) {
		a[i] = (Node*)malloc(sizeof(Node));
		a[i]->next = NULL; //기본적으로 root는 NULL
	}
	for (int i = 0; i < m; i++) {
		int x, y, distance;
		scanf("%d %d %d", &x, &y, &distance);
		addFront(a[x], y, distance);
	}
	for (int i = 1; i <= n; i++) {
		printf("원소 [%d]: ", i);
		showAll(a[i]);
		printf("\n");
	}
	system("pause");
	return 0;
}
*/

/*
//무방향 가중치 Code

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[1001][1001];
int n, m;

int main(void) {
	scanf("%d %d", &n, &m);
	//n은 노드의 갯수, m은 간선의 갯수
	for (int i = 0; i < m ; i++) { //간선의 갯수만큼만 입력받음
		int x, y;
		scanf("%d %d", &x, &y);
		a[x][y] = 1;
		a[y][x] = 1;
	}

	for (int i = 1; i <= n;i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
}
*/
