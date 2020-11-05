#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"assert.h"

char* my_strncpy(char* str1, const char* str2, size_t n){
	assert(str1);
	assert(str2);
	int cur = 0;
	int i = 0;
	for (i = 0; i < n;i++){
		str1[i] = str2[i];
	}
	if (i < n){
		str1[i] = 0;
	}
	return str1;
}
int main(){
	char str1[20] = { 0 };
	char str2[10] = "hehehe";
	char*str= my_strncpy(str1, str2, 9);
	printf("%s\n", str);
	return 0;
}