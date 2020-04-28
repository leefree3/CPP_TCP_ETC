/*
#include <stdio.h>
#define NUMBER 7

int a[] = { 7,1,9,5,6,4,1 };
int tree[4 * NUMBER]; //4를 곱하면 모든 범위를 커버할 수 있다.

//start : 시작인덱스, end: 끝 인덱스
//node: 특정한 인덱스
int init(int start, int end, int node) {
	//리프노드라면, 그 값이 tree에 들어간다.
	if (start == end) return tree[node] = a[start];
	//그 값이 아니라면
	//재귀적으로 두 부분으로 나눈 뒤에 그 합을 자기 자신으로 한다.
	int mid = (start + end) / 2;
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

//start : 시작인덱스, end: 끝 인덱스
//left, right: 구간 합을 구하고자 하는 범위
int sum(int start, int end, int node, int left, int right) {
	//범위 밖에 있는 경우
	if (left > end || right < start) return 0;
	if (left <= start && end <= right) return tree[node];
	int mid = (start + end) / 2;
	return sum(start, mid, node * 2, left, right) + sum(mid + 1, end, node * 2 + 1, left, right);
}
//start: 시작인덱스, end: 끝 인덱스
//index: 구간 합을수정하고자 하는 노드
//dif: 수정할 값.
void update(int start, int end, int node, int index, int dif) {
	if (index<start || index>end) return;
	tree[node] += dif;
	if (start == end) return;
	int mid = (start + end) / 2;
	update(start, mid, node * 2, index, dif);
	update(mid + 1, end, node * 2 + 1, index, dif);
}

int main(void) {
	init(0, NUMBER - 1, 1);
	printf("0부터 6까지의 구간합: %d\n", sum(1, NUMBER - 1, 1, 0, 6));
	printf("인덱스 5의 원소를 +3만큼 수정 \n");
	update(0, NUMBER - 1, 1, 5, 3);
	printf("3부터 6까지의 구간 합: %d\n", sum(0, NUMBER - 1, 1, 3, 6));
	system("pause");
}
*/