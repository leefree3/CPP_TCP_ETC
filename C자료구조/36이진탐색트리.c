/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node* leftChild;
	struct Node* rightChild;

}Node;

//���� �˰���


// ����Ž��Ʈ�� ����
//Ư�� ��Ʈ����, ��带 �����ϰ��� �Ҷ�
//root�� NULL���� ��, �ش� ��Ʈ�� �ʱ�ȭ �Ѵ�.
// �׷��� �ʴٸ�, Root�� ������ �ִ� �����ͺ��� �����ϰ��� �ϴ� �����Ͱ� �۴ٸ�
// �������� ���� �ٽ� ��带 �����ϸ� �ȴ�. �׸��� ���Ե� ����� �ڽ��� ���� �ڽſ� �ִ´�.
// �ݴ��� �����ʿ� ����.

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

//���� Ž�� Ʈ���� Ž��
//Ư���� ���Ҹ� ã�� �� ���� �ݺ�
// �ش� �����͸� ã�Ҵ�(����)�� �ش� ��� ��ü(������)�� ��ȯ
// �ش� �����ͺ��� ã�� �����Ͱ� �۴ٸ� ���� �ڽ����� Ž�� �ٽ� �ϸ�ǰ�
//�׷��� �ʴٸ� ������ �ڽ����� �ٽ� Ž���ϸ� �ȴ�.
Node* searchNode(Node *root, int data) {
	if (root == NULL) return NULL;
	if (root->data == data) return root;
	else if (root->data > data) return searchNode(root->leftChild, data);
	else return searchNode(root->rightChild, data);
}

//���� Ž�� Ʈ���� ��ȸ(���� ��ȸ)
void preorder(Node* root) {
	if (root == NULL) return;
	printf("%d ", root->data);
	preorder(root->leftChild);
	preorder(root->rightChild);
}

//���� Ž�� Ʈ���� ����

1) �ڽ��� ���� ���
	- ������ ����� �ڽ��� ���� ��� �ܼ��� �����ϸ� �˴ϴ�.
2) �ڽ��� �ϳ��� �����ϴ� ���
	- ������ ����� �ڸ��� �ڽ� ��带 �ֽ��ϴ�.(�ڽĳ���, �θ��� ��ü)
3) �ڽ��� �� �� �����ϴ� ���
	- �������� ������ ����� �ڸ��� �ڱ� �������� ū ��带 �ֽ��ϴ�.


//���� Ž��Ʈ���� ���� ���� ���� ã�� �Լ�
Node* findMinNode(Node* root) {
	Node* node = root;
	while (node->leftChild != NULL) {
		node = node->leftChild;
	}
	return node;
}

//���� Ž��Ʈ���� �����Լ�
//���� ã���� �ϴ� ��带 ã�� ���ߴٸ� NULL ��ȯ
//���纸���ִ� ��尡, �����ϰ����ϴ� ��庸�� ũ�ٸ� �������� Ž�� ����.
//�׷��� �ʴٸ� ���������� Ž��
//������ ��带 ã�� ��� ��
// �ڽ��� �� �� ������ ��� , ������ �ڽ� �� ���� ���� ���� ã�´�. (�ٷ� �������� ū ��� ã�°�)
// �� ����� �����ͷ� �ٲ��ش�.
// �ٲ� ��带 ����� �ȴ�.
//�׷��� �ʰ� leftChild�� Null���� �ƴ϶��(���ʿ� �ڽ��� �����Ѵٸ�), �����ڽ��� ��忡 ���, �׷��� �ʴٸ� ������ �ڽ��� ��忡 ��´�.
//���� �ڱ� �ڽ��� ��带 free(�Ҵ�����)�ϰ�, node�� ��ȯ�����ν� �ش� �ڽĳ�尡 ��Ʈ��带 ��ü�� �� �ֵ��� �ϸ� �ȴ�.
//��������� �ڽ��� �� �� ������ ���� ��Ʈ��带 �Ҵ� ���������ν� �ذ�ȴ�.


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