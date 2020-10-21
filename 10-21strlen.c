#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"assert.h"
//第一种 计数器
//size_t my_strlen(const char* str){
//   assert(str != NULL);
//	int count = 0;
//	while (*str != '\0'){
//		*str++;
//		count++;
//	}return count;
//}
//第二种 递归，不创建临时变量
//size_t  my_strlen(const char* str){
//   assert(str != NULL);
//	if (*str == '\0'){
//		return 0;
//	}
//	return 1 + my_strlen(str + 1);
//}
//第三种 指针-指针
size_t my_strlen(const char* str){
	  assert(str != NULL);
	char* start = str;
	while (*str != '\0'){
		str++;
	}
	return str - start;
}
//第四种 函数
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