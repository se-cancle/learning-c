//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include"assert.h"
//
//char* my_strncat(char* str1, const char* str2, size_t n){
//	assert(str1);
//	assert(str2);
//	int cur = 0;
//	while (str1[cur]){
//		cur++;
//	}
//	for (int i = 0; i < n;i++){
//		str1[cur+i] = str2[i];
//   }
//	return str1;
//}
//int main(){
//	char str1[10] = "haha";
//	char str2[10] = "hehehe";
//	char*str= my_strncat(str1, str2, 5);
//	printf("%s\n", str);
//	return 0;
//}