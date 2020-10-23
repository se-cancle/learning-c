

#include<stdio.h>
#include<stdlib.h>
#include"seqList.h"

void test(){
	seqList s1;
	seqListInit(&s1);
	seqListPushBack(&s1, 1);
	seqListPushBack(&s1, 2);
	seqListPushBack(&s1, 3);

	seqListPrint(&s1);
	seqListPopBack(&s1);
	seqListPrint(&s1);
	seqListPopBack(&s1);
	seqListPrint(&s1);
	seqListPopBack(&s1);
	seqListPrint(&s1);
	seqListPopBack(&s1);
}
void test2(){
	seqList s1;
	seqListInit(&s1);
	seqListPrint(&s1);
	seqListPushFront(&s1, 3);
	seqListPrint(&s1);
	seqListPushFront(&s1, 2);
	seqListPrint(&s1);
	seqListPushFront(&s1, 1);
	seqListPrint(&s1);
}
int main(){

	test();
	test2();
	system("pause");
	return 0;
}