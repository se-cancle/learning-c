#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"assert.h"
//数组和变量在内存中的存储
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	system("pause");
//	return 0;
//}
//int Strlen(char* str){
//	int size = 0;
//	while (* str!='\0'){
//		size++;
//		str++;
//	}
//	return size;
//}
//int main(){
//	char str[] = "abcdef";
//	int ret=strlen(str);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

char* Strcpy(char* dest, const char* src)
	{
		assert(dest != NULL);
		assert(src != NULL);
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		return dest;//拷贝\0
}
	int main(){
		char str[10] = { 0 };
		Strcpy(str, "haha");
		printf("%s\n", str);
		system("pause");
		return 0;
	}
		