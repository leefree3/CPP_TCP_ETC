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

//연결 리스트 삽입과정
//void addFront(Node *root, int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = root->next;
//	root->next = node;
//}
//
////연결 리스트 삭제과정
//void removeFront(Node* root) {
//	Node *front = root->next;
//	root->next = front->next;
//	free(front);
//}
//
////메모리 해제 함수
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
////연결 리스트에 존재하는 전체 출력함수
//void showAll(Node* root) {
//	Node* cur = head->next;
//	while (cur !=NULL) {
//		printf("%d ",cur->data);
//		cur = cur->next;
//	}
//}
//
////main함수
//int main(void) {
//	head = (Node*)malloc(sizeof(Node));
//	head->next = NULL; //마지막 값은 Null이기 때문에 //현재 가리키고 있는 노드가 없다.
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



















//if문 예제1
//int main(void) {
//	printf("손님이 몇명 왔나요? ");
//	int a;
//	scanf("%d", &a);
//	if ( a == 1 || a == 2) {
//		printf("2인석으로 안내합니다. \n ");
//	}
//	else if (a==3 || a==4) {
//		printf("4인석으로 안내합니다. \n ");
//	}
//	else {
//		printf("단체석으로 안내합니다. \n ");
//	}
//	system("pause");
//}


//if문 예제2
//int main(void) {
//	int size;
//	printf("메인 메모리의 크기를 입력하세요. \n");
//	scanf("%d", &size);
//	if (size >= 16) {
//		printf("메인 메모리의 크기가 충분합니다.\n ");
//	}
//	else {
//		printf("메인 메모리를 증설하세요. \n ");
//	}
//	system("pause");
//}


//if문을 여러개를 사용할 경우,
//반드시 논리적으로 문제가 없는지 검사해야한다.
//아래 예시는 값을 16을 입력했을 경우 
//결과가 2개가나오는 오류가 발생된다.(조심하자)
//int main(void) {
//	int size;
//	printf("메인 메모리의 크기를 입력하세요. \n");
//	scanf("%d", &size);
//	if (size >= 16) {
//		printf("메인 메모리의 크기가 충분합니다.\n ");
//	}
//	if(size <=16) {
//		printf("메인 메모리를 증설하세요. \n ");
//	}
//	system("pause");
//}

//switch문 예제1
//int main(void) {
	//	printf("학점을 입력하세요 \n");
	//	char a;
	//	scanf("%c",&a);
	//	switch (a) {
	//	case 'A' :
	//		printf("A 학점입니다. \n");
	//		break;
	//	case 'B':
	//		printf("B 학점입니다. \n");
	//		break;
	//	case 'C':
	//		printf("C 학점입니다. \n");
	//		break;
	//
	//	default:
	//		printf("학점을 바르게 입력하세요. \n");
	//	}
	//	system("pause");
	//	return 0;
	//}


//Switch 예제2
//int main(void) {
//	printf("월을 입력하세요 \n");
//	int a;
//	scanf("%d", &a);
//	switch (a) {
//	case 1: case 2: case 3:
//		printf("봄 \n");
//		break;
//	case 4: case 5: case 6:
//		printf("여름 \n");
//		break;
//	case 7: case 8: case 9:
//		printf("가을 \n");
//		break;
//	case 10: case 11: case 12:
//		printf("겨울 \n");
//		break;
//	default:
//		printf("학점을 바르게 입력하세요. \n");
//	}
//	system("pause");
//	return 0;
//}


//1부터 N번째 까지의 합.
//int main(void) {
//	int n, sum = 0;
//	printf("n을 입력해 주세요. ");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		//printf("%d\n",i);
//		sum = sum + i;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}


//특정문자 n번 출력하기
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



//scanf()함수가 있는 것을 실행시키고자 할때는 define_CRT~~이거 켜줘야 한다.
//while 문으로 구구단
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

//for문으로 구구단
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


//말머리 붙이기 예제
//void dice(int input) {
	//	printf("동빈이가 던진 주사위: %d\n",input);
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


//더하기 함수 만들기
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



//사칙연산 함수 만들기
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


//재귀함수를 이용한 팩토리얼
//예) 5*4*3*2*1
//int factorial(int a) {
//	if (a == 1) return 1;
//	else return a * factorial(a - 1);
//}
//
//int main(void) {
//	int n;
//	printf("n 팩토리얼을 계산합니다.");
//	scanf("%d", &n);
//	printf("%d\n", factorial(n));
//	system("pause");
//}


//14강 1번 예제 잘 모르겠다..
//int main(void) {
//	int *a = malloc(sizeof(int));
//	printf("%d\n", a);
//	a = malloc(sizeof(int));
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}


//14강 마지막 예제
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
