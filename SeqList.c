#include<stdlib.h>
#include"seqList.h"

void seqListInit(seqList* s1){
	//初始化数组
	s1->_array = (int*)malloc(sizeof(DataType) * 4);
	s1->_capacity = 4;
	s1->_size = 0;
}
//pushBack:尾插
void seqListPushBack(seqList* s1, DataType value){
	s1->_array[s1->_size++] = value;
}
//popBack:尾删
void seqListPopBack(seqList* s1){
	//不需要释放空间
	if (s1->_size)
		--s1->_size;
}

void seqListPrint(seqList* s1){
	for (int i = 0; i < s1->_size; i++){
		printf("%d ", s1->_array[i]);
	}
	printf("\n");
}