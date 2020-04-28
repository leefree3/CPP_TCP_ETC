#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000
/*
void radixSort(int* a, int n) {
	int res[MAX], maxValue = 0;
	int exp = 1;

	//가장 큰 값의 자릿 수 계산을 위해 maxValue이용
	for (int i = 0; i < n; i++) {
		if (a[i] > maxValue) maxValue = a[i];
	}

	//exp: 1의 자리부터 차례대로 검사.
	while (maxValue / exp > 0) //가장 큰 자릿수 까지만 검사
	{
		int bucket[10] = { 0 };
		for (int i = 0; i < n; i++) bucket[a[i] / exp % 10] ++;
		for (int i = 1; i < 10; i++)bucket[i] += bucket[i - 1];
		
		for (int i = n - 1; i >= 0; i--) {
			res[--bucket[a[i] / exp % 10]] = a[i];
		}
		
		for (int i = 0; i < n; i++) a[i] = res[i];
		exp *= 10; //한번 검사한 뒤 *10을 하기 때문에 한자리수 씩 증가
	}
}

int main(void) {
	int a[MAX];
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	radixSort(a, n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	system("pause");
}
*/