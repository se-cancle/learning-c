#include<stdio.h>
#include<stdlib.h>
#include"assert.h"

int strcmp(const char* str1, const char* str2){
	assert(str1 != NULL&&str2 != NULL);
	
	while (*str1 != '\0'&&*str2 != '\0'){
		//1.�Ƚ���Ԫ�ص�ַ
		if (*str1 < *str2){
			return -1;
		}
		else if (*str1>*str2){
			return 1;
		}
		else{
			str1++;
			str2++;
		}
	}
	//2.�Ƚ�����
	if (*str1 < *str2){
		return -1;
	}
	else if (*str1>*str2){
		return 1;
	}
	else
		return 0;
}
int main(){
	char str1[100] = "hehe";
	char str2[10] = "haha";
	int ret=strcmp(str1, str2);
	printf("%d", ret);

	system("pause");
	return 0;
}