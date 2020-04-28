/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node* leftChild;
	struct Node* rightChild;

}Node;

//삽입 알고리즘


// 이진탐색트리 삽입
//특정 루트부터, 노드를 삽입하고자 할때
//root가 NULL값일 때, 해당 루트를 초기화 한다.
// 그렇지 않다면, Root가 가지고 있는 데이터보다 삽입하고자 하는 데이터가 작다면
// 왼쪽으로 가서 다시 노드를 삽입하면 된다. 그리고 삽입된 결과를 자신의 왼쪽 자신에 넣는다.
// 반대라면 오른쪽에 실행.

Node* insertNode(Node*root, int data) {
	if (root == NULL) {
		root = (Node*)malloc(sizeof(Node));
		root->leftChild = root->rightChild = NULL;
		root->data = data;
		return root;
	}
	else {
		if (root->data > data) {
			root->leftChild = insertNode(root->leftChild, data);
		}
		else {
			root->rightChild = insertNode(root->rightChild, data);
		}
	}
	return root;
}

//이진 탐색 트리의 탐색
//특정한 원소를 찾을 때 까지 반복
// 해당 데이터를 찾았다(같다)면 해당 노드 자체(포인터)를 반환
// 해당 데이터보다 찾는 데이터가 작다면 왼쪽 자식으로 탐색 다시 하면되고
//그렇지 않다면 오른쪽 자식으로 다시 탐색하면 된다.
Node* searchNode(Node *root, int data) {
	if (root == NULL) return NULL;
	if (root->data == data) return root;
	else if (root->data > data) return searchNode(root->leftChild, data);
	else return searchNode(root->rightChild, data);
}

//이진 탐색 트리의 순회(전위 순회)
void preorder(Node* root) {
	if (root == NULL) return;
	printf("%d ", root->data);
	preorder(root->leftChild);
	preorder(root->rightChild);
}

//이진 탐색 트리의 삭제

1) 자식이 없는 경우
	- 삭제할 노드의 자식이 없는 경우 단순히 제거하면 됩니다.
2) 자식이 하나만 존재하는 경우
	- 삭제할 노드의 자리에 자식 노드를 넣습니다.(자식노드랑, 부모노드 교체)
3) 자식이 둘 다 존재하는 경우
	- 다음으로 삭제할 노드의 자리에 자기 다음으로 큰 노드를 넣습니다.


//이진 탐색트리의 가장 작은 원소 찾기 함수
Node* findMinNode(Node* root) {
	Node* node = root;
	while (node->leftChild != NULL) {
		node = node->leftChild;
	}
	return node;
}

//이진 탐색트리의 삭제함수
//현재 찾고자 하는 노드를 찾지 못했다면 NULL 반환
//현재보고있는 노드가, 삭제하고자하는 노드보다 크다면 왼쪽으로 탐색 수행.
//그렇지 않다면 오른쪽으로 탐색
//삭제할 노드를 찾은 경우 중
// 자식이 둘 다 존재할 경우 , 오른쪽 자식 중 가장 작은 것을 찾는다. (바로 다음으로 큰 노드 찾는것)
// 그 노드의 데이터로 바꿔준다.
// 바뀐 노드를 지우면 된다.
//그렇지 않고 leftChild가 Null값이 아니라면(왼쪽에 자식이 존재한다면), 왼쪽자식을 노드에 담고, 그렇지 않다면 오른쪽 자식을 노드에 담는다.
//현재 자기 자신의 노드를 free(할당해재)하고, node를 반환함으로써 해당 자식노드가 루트노드를 대체할 수 있도록 하면 된다.
//결과적으로 자식이 한 개 이하일 때는 루트노드를 할당 해지함으로써 해결된다.


Node* deleteNode(Node* root, int data) {
	Node* node = NULL;
	if (root == NULL) return NULL;
	if (root->data > data) root->leftChild = deleteNode(root->leftChild, data);
	else if (root->data < data) root->rightChild = deleteNode(root->rightChild, data);
	else {
		if (root->rightChild != NULL && root->leftChild != NULL) {
			node = findMinNode(root->rightChild);
			root->data = node->data;
			root->rightChild = deleteNode(root->rightChild, node->data);
		}
		else {
			node = (root->leftChild != NULL) ? root->leftChild : root->rightChild;
			free(node);
			return node;
		}
	}
	return root;
}


int main(void) {
	Node* root = NULL;
	root = insertNode(root, 30);
	root = insertNode(root, 17);
	root = insertNode(root, 48);
	root = insertNode(root, 5);
	root = insertNode(root, 23);
	root = insertNode(root, 37);
	root = insertNode(root, 50);
	root = deleteNode(root, 30);
	preorder(root);
	system("pause");
}

*/