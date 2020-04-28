/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#define TABLE_SIZE 10007
#define INPUT_SIZE 5000

//선형 조사법 구조체 정의
typedef struct {
	//id값을 기준으로 들어간다.
	int id;
	char name[20];
}Student;

typedef struct {
	Student* data;
	struct Bucket* next;
}Bucket;

// 해시테이블 초기화
void init(Student** hashTable) {
	for (int i = 0; i < TABLE_SIZE; i++) {
		hashTable[i] = NULL;
	}
}

//해시 테이블의 메모리를 반환합니다.
void destructor(Student** hashTable) {
	for (int i = 0; i < TABLE_SIZE; i++) {
		if (hashTable[i] != NULL) {
			free(hashTable[i]);
		}
	}
}

//체이닝 데이터 검색 함수
int isExist(Bucket** hashTable, int id) {
	int i = id % TABLE_SIZE;
	if (hashTable[i] == NULL) return 0;
	else {
		Bucket* cur = hashTable[i];
		while (cur != NULL) {
			if (cur->data->id == id) return 1;
			cur = cur->next;
		}
	}
	return 0;
}

//해시 테이블 데이터 삽입(특정 키 인덱스에 데이터 삽입)
void add(Bucket** hashTable, Student* input) {
	int i = input->id % TABLE_SIZE;
	if (hashTable[i] == NULL) {
		hashTable[i] = (Bucket*)malloc(sizeof(Bucket));
		hashTable[i]->data = input;
		hashTable[i]->next = NULL;
	}
	else {
		Bucket* cur = (Bucket*)malloc(sizeof(Bucket));
		cur->data = input;
		cur->next = hashTable[i];
		hashTable[i] = cur;
	}
}




void show(Bucket** hashTable) {
	for (int i = 0; i < TABLE_SIZE; i++) {
		if (hashTable[i] != NULL) {
			Bucket* cur = hashTable[i];
			while (cur != NULL)
			{
				printf("키: [%d], 이름: [사람%d]\n", i, cur->data->name);
				cur = cur->next;
			}
		}
	}
}

int main(void) {
	
	Bucket** hashTable;
	hashTable = (Bucket**)malloc(sizeof(Bucket)*TABLE_SIZE);
	init(hashTable);

	for (int i = 0; i < INPUT_SIZE; i++) {
		Student* student = (Student*)malloc(sizeof(Student));
		student->id = rand() % 1000000;
		sprintf(student->name, "사람 %d", student->id);
		if (!isExist(hashTable, student->id)) {
			add(hashTable, student);
		}
	}
	show(hashTable);
	destructor(hashTable);
	system("pause");
	return 0;
}

*/