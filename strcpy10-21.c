#include<stdio.h>
#include<stdlib.h>
#include"assert.h"
char* strcpy(char* str1, const char* str2){
	assert(str1 != NULL);
	assert(str2!= NULL);
	char* result = str1;
	while (*str2 != '\0'){
		*str1 = *str2;
		str2++;
		str1++;	
	}
	return result;
}
int main(){
	char str1[100] = { 0 };
	char str2[] = "start";
	strcpy(str1, str2);
	printf("%s", str1);
	system("pause");
	return 0;
}