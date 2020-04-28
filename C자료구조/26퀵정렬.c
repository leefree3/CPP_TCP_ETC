#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1000

int a[SIZE];

//swap함수

/*
int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//퀵정렬
void quickSort(int start, int end) {
	if (start >= end) return;
	int key = start, i = start + 1, j = end, temp; 
	//key는 피벗값(스타트), i는 왼쪽에서 출, j는 끝에서 출
	while (i <= j) { // 엇갈릴 때까지 반복
		while (i <= end && a[i] <= a[key]) i++;
		while (j > start&& a[j] >= a[key]) j--;
		if (i > j)swap(&a[key], &a[j]);
		else swap(&a[i], &a[j]);
	}
	quickSort(start, j - 1);
	quickSort(j + 1, end);
}

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf ("%d",&a[i]);
	quickSort(0, n - 1);
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	system("pause");
	return 0;
}
*/