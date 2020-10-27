
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"assert.h"
//strcmp
int my_strcmp(const char* str1, const char* str2){
	assert(str1);
	assert(str2);	
	while (*str1 == *str2){
		if (*str1 == '\0'){
			return 0;
		}
			str1++;
			str2++;		
	}
	if (*str1 > *str2){
		return 1;
	}
	else{
		return -1;
	}	 
}
int main()
{
	char str1[] = "abcdef";
	char str2[] = "abdfrt";
	int ret = my_strcmp(str1, str2);
	if (ret < 0)
	{
		printf("小于\n");
	} 
	else if (ret == 0)
	{
		printf("等于\n");
	}
	else
	{
		printf("等于\n");
	}
	system("pause");
	return 0;
}

