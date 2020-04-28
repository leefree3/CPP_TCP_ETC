#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_VALUE 10001

// MAX_VALUE : 정렬을 하고자 하는 데이터 중 가장 큰 값.
// 계수정렬은 배열의 index를 넘어가면 정렬을 할 수가 없다.
// 크기 기반이기 때문!
// 상당한 메모리를 차지하지만, 빠르게 동작할 수 있다.
//int n, m;
//int a[MAX_VALUE];
//
//int main() {
//	scanf("%d", &n);
//	//어떤 값이 입력 될 때마다, 그 값에 해당하는 index의 원소를 1 증가
//	for (int i = 0; i < n; i++) { scanf("%d", &m); a[m]++; };
//	for (int i = 0; i < MAX_VALUE; i++) {
//		while (a[i] != 0) {
//			printf("%d ", i);
//			a[i]--;
//		}
//	}
//		system("pause");
//}

