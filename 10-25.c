#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"assert.h"
char* my_strcat(char* dest, const char* src){
	assert(dest != NULL&&src != NULL);
		char* ret = dest;

	//1.找目的地空间的'\0'
	while (*dest ){
		dest++;
	}
	//2.拷贝数据
	while (*dest++ = *src++){
		;
	}return ret;
}

int main(){
	char arr1[20] = "hello ";
	/*my_strcat(arr1, "world");
	printf("%s\n", arr1);*/
	printf("%s\n", my_strcat(arr1, "world"));
	system("pause");
	return 0;
}
//char* my_strcpy(char* dest, const char* src){
//	assert(dest != NULL&&src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++){
//
//		;
//	}return ret;
//
//	/*while (src != '\0'){
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//}
//int main(){
//	char* str1 = "abcdef";
//	char arr[20] = "XXXXXXXXXXXXXXXXXXX";
//	//my_strcpy(arr,str1);
//	printf("%s\n", my_strcpy(arr,str1));
//
//	system("pause");
//	return 0;
//}
