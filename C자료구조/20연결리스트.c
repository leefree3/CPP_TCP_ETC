//#include <limits.h>
//#include <stdlib.h>
//#include <string.h>
//#include "temp.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node *next;
}Node;

Node *head;

//���� ����Ʈ ���԰���
//void addFront(Node *root, int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = root->next;
//	root->next = node;
//}
//
////���� ����Ʈ ��������
//void removeFront(Node* root) {
//	Node *front = root->next;
//	root->next = front->next;
//	free(front);
//}
//
////�޸� ���� �Լ�
//void freeAll(Node* root) {
//	Node* cur = head->next;
//	//Node* cur = root->next;
//	while (cur != NULL) {
//		Node* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//}
//
////���� ����Ʈ�� �����ϴ� ��ü ����Լ�
//void showAll(Node* root) {
//	Node* cur = head->next;
//	while (cur !=NULL) {
//		printf("%d ",cur->data);
//		cur = cur->next;
//	}
//}
//
////main�Լ�
//int main(void) {
//	head = (Node*)malloc(sizeof(Node));
//	head->next = NULL; //������ ���� Null�̱� ������ //���� ����Ű�� �ִ� ��尡 ����.
//	addFront(head, 2);
//	addFront(head, 1);
//	addFront(head, 7);
//	addFront(head, 9);
//	addFront(head, 8);
//
//	removeFront(head);
//	showAll(head);
//	freeAll(head);
//
//	system("pause");
//	return 0;
//}
//
//
//



















//if�� ����1
//int main(void) {
//	printf("�մ��� ��� �Գ���? ");
//	int a;
//	scanf("%d", &a);
//	if ( a == 1 || a == 2) {
//		printf("2�μ����� �ȳ��մϴ�. \n ");
//	}
//	else if (a==3 || a==4) {
//		printf("4�μ����� �ȳ��մϴ�. \n ");
//	}
//	else {
//		printf("��ü������ �ȳ��մϴ�. \n ");
//	}
//	system("pause");
//}


//if�� ����2
//int main(void) {
//	int size;
//	printf("���� �޸��� ũ�⸦ �Է��ϼ���. \n");
//	scanf("%d", &size);
//	if (size >= 16) {
//		printf("���� �޸��� ũ�Ⱑ ����մϴ�.\n ");
//	}
//	else {
//		printf("���� �޸𸮸� �����ϼ���. \n ");
//	}
//	system("pause");
//}


//if���� �������� ����� ���,
//�ݵ�� �������� ������ ������ �˻��ؾ��Ѵ�.
//�Ʒ� ���ô� ���� 16�� �Է����� ��� 
//����� 2���������� ������ �߻��ȴ�.(��������)
//int main(void) {
//	int size;
//	printf("���� �޸��� ũ�⸦ �Է��ϼ���. \n");
//	scanf("%d", &size);
//	if (size >= 16) {
//		printf("���� �޸��� ũ�Ⱑ ����մϴ�.\n ");
//	}
//	if(size <=16) {
//		printf("���� �޸𸮸� �����ϼ���. \n ");
//	}
//	system("pause");
//}

//switch�� ����1
//int main(void) {
	//	printf("������ �Է��ϼ��� \n");
	//	char a;
	//	scanf("%c",&a);
	//	switch (a) {
	//	case 'A' :
	//		printf("A �����Դϴ�. \n");
	//		break;
	//	case 'B':
	//		printf("B �����Դϴ�. \n");
	//		break;
	//	case 'C':
	//		printf("C �����Դϴ�. \n");
	//		break;
	//
	//	default:
	//		printf("������ �ٸ��� �Է��ϼ���. \n");
	//	}
	//	system("pause");
	//	return 0;
	//}


//Switch ����2
//int main(void) {
//	printf("���� �Է��ϼ��� \n");
//	int a;
//	scanf("%d", &a);
//	switch (a) {
//	case 1: case 2: case 3:
//		printf("�� \n");
//		break;
//	case 4: case 5: case 6:
//		printf("���� \n");
//		break;
//	case 7: case 8: case 9:
//		printf("���� \n");
//		break;
//	case 10: case 11: case 12:
//		printf("�ܿ� \n");
//		break;
//	default:
//		printf("������ �ٸ��� �Է��ϼ���. \n");
//	}
//	system("pause");
//	return 0;
//}


//1���� N��° ������ ��.
//int main(void) {
//	int n, sum = 0;
//	printf("n�� �Է��� �ּ���. ");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		//printf("%d\n",i);
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//Ư������ n�� ����ϱ�
//int main(void) {
//	int n;
//	char a;
//	scanf("%d %c", &n, &a);
//	while (n--) {
//		printf("%c", a);
//	}
//	system("pause");
//	return 0;
//}



//scanf()�Լ��� �ִ� ���� �����Ű���� �Ҷ��� define_CRT~~�̰� ����� �Ѵ�.
//while ������ ������
//int main(void) {
//	int i = 1;
//	while (i<=9) {
//		int j = 1;
//		while (j<=9)
//		{
//			printf("%d * %d = %d\t", j, i, i * j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//for������ ������
//int main(void) {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9 ; j++){
//			printf("%d * %d = %d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//���Ӹ� ���̱� ����
//void dice(int input) {
	//	printf("�����̰� ���� �ֻ���: %d\n",input);
	//}
	//
	//int main(void) {
	//	dice(3);
	//	dice(5);
	//	dice(1);
	//	system("pause");
	//}
	//
	//


//���ϱ� �Լ� �����
//int add(int a, int b) {
//	return a + b;
//}
//
//int main(void) {
//	printf("%d\n", add(1, 2));
//	printf("%d\n", add(10, 20));
//	printf("%d\n", add(7, 3));
//	system("pause");
//	return 0;
//}



//��Ģ���� �Լ� �����
//void calc(int a, int b) {
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("\n");
//}
//
//int main(void) {
//	calc(10, 20);
//	calc(20, 20);
//	calc(30, 20);
//	system("pause");
//	return 0;
//}


//����Լ��� �̿��� ���丮��
//��) 5*4*3*2*1
//int factorial(int a) {
//	if (a == 1) return 1;
//	else return a * factorial(a - 1);
//}
//
//int main(void) {
//	int n;
//	printf("n ���丮���� ����մϴ�.");
//	scanf("%d", &n);
//	printf("%d\n", factorial(n));
//	system("pause");
//}


//14�� 1�� ���� �� �𸣰ڴ�..
//int main(void) {
//	int *a = malloc(sizeof(int));
//	printf("%d\n", a);
//	a = malloc(sizeof(int));
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}


//14�� ������ ����
//int main(void) {
//	int **p = (int**)malloc(sizeof(int*) * 3);
//	for (int i = 0; i < 3; i++) {
//		*(p + i) = (int*)malloc(sizeof(int) * 3);
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			*(*(p + i) + j) = i * 3 + j;
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ",*(*(p + i) + j));
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
