//#include<stdio.h>
//#include<stdlib.h>
//#include"assert.h"
//size_t my_strlen(const char* str){
//	assert(str);
//	int count = 0;
//	while (*str != '\0'){
//		str++;
//		count++;
//	}
//	return count;
//}
//size_t my_strlen(const char* str){
//	if (*str == '\0'){
//		return 0;
//	}else{
//		return 1 + my_strlen(str + 1);
//	}
//}
//size_t my_strlen(const char* str){
//	char* start = str;
//	while (*str != '\0'){
//		str++;
//	}
//	return str - start;
//}
//int main(){
//	char* str = "abcdef";
//	size_t ret=my_strlen(str);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}