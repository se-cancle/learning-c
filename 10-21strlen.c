#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"assert.h"
//��һ�� ������
//size_t my_strlen(const char* str){
//   assert(str != NULL);
//	int count = 0;
//	while (*str != '\0'){
//		*str++;
//		count++;
//	}return count;
//}
//�ڶ��� �ݹ飬��������ʱ����
//size_t  my_strlen(const char* str){
//   assert(str != NULL);
//	if (*str == '\0'){
//		return 0;
//	}
//	return 1 + my_strlen(str + 1);
//}
//������ ָ��-ָ��
size_t my_strlen(const char* str){
	  assert(str != NULL);
	char* start = str;
	while (*str != '\0'){
		str++;
	}
	return str - start;
}
//������ ����
//size_t my_strlen(const char* str){
//   assert(str != NULL);
//	return strlen(str);
//}
int main(){
	 char  str[] = "abcdef";
	int ret=my_strlen(str);
	printf("%d", my_strlen(str));
	 system("pause");
	 return 0;
}