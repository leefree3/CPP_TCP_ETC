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

//c: ���� �湮�� �ߴ��� üũ�ϴ� ����
//n: ����, m: ����

//�����Լ�
void addFront(Node *root, int index) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->index = index;
	node->next = root->next;
	root->next = node;
}

//���� �켱Ž�� �Լ�
//Ư�� x index�� ��忡�� ���̿켱Ž���� ������ �� �ֵ��� �� �� �ִ�.
//���� �ִ� ��ġ�� �湮������ �ִٸ� �ٷ� return ����
//���� �ش� ��带 �湮�ߴٰ� �湮ó���� ��(1).
//�ش� ��带 ���.
//�ش� ��忡 ����� ������ �ϳ��� Ȯ��
//NULL���� �ƴ� ������ �湮 => ��� ���Ҹ� �湮 �� �� ����.
//����� ���� ��带 Ȯ���ؼ�, �ش� ��忡�� ��������� ȣ���ؼ�, �湮���� �ʾҴٸ� �� �Լ��� �������� ��� Ž��.

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

//����, ���� ���ʷ� �Է¹޴´�.
//������ �������ϱ� ������ ������ŭ �Ҵ��� �� �ֵ��� �Ѵ�.
//���������� �ʱ�ȭ(�ڸ��Ҵ�, NULL) �Ѵ�.
//������ ������ŭ �ݺ�
//x�� y ����
//���� 1���� �����ϴ� test�� �Ѵ�.
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