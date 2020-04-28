/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100000

int a[MAX_SIZE];
int founded = 0;

int search(int start, int end, int target) {
	if (start > end) return -9999;
	int mid = (start + end) / 2;
	if (a[mid] == target) return mid;
	else if (a[mid] > target) return search(start, mid - 1, target);
	else return search(mid + 1, end, target);
}

int main(void) {
	int n, target;
	scanf("%d %d", &n, &target);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	int result = search(0, n - 1, target);
	if (result != -9999) printf("%d번째 원소입니다.\n", result + 1);
	else printf("원소를 찾을 수 없습니다.");
	system("pause");
	return 0;
}
*/

/*
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 1000
//문자열 순차 탐색 구현1)
char** array;
int founded;

//문자열 순차 탐색 구현
int main(void) {
	int n;
	char* word;

	word = malloc(sizeof(char) * LENGTH);
	scanf("%d %s", &n, word); //n: 전체 데이터 개수, word:해당 문자열
	array = (char**)malloc(sizeof(char*) * n);
	
	for (int i = 0; i < n; i++) {
		array[i] = malloc(sizeof(char) * LENGTH);
		scanf("%s", array[i]);
	}
	for (int i = 0; i < n; i++) {
		if (!strcmp(array[i], word)) {
			printf("%d 번째 원소 입니다.\n", i + 1);
			founded = 1;
		}
	}
	if (!founded) printf("원소를 찾을 수 없습니다. \n");
	system("pause");
	return 0;
}
*/