#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char*Strcat(char* dest, const char* src){
	if (dest == NULL || src == NULL){
		return NULL;
	}
	int cur = 0;
	while (dest[cur] != '\0'){
		cur++;
	}
	int i = 0;
	while (src[i] != '\0'){
		dest[cur + i] = src[i];
		i++;
	}
	dest[cur + i] = '\0';
	return dest;
}

int main(){
	char str1[100] = "hehe";
	char str2[100] = "haha";
	strcat(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}




//char* Strcpy(char* dest, const char* src){
//	if (dest == NULL || src == NULL){
//		return NULL;
//	}
//	char* result = dest;
//	while (*src != '\0'){
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//	return result;
//}
//
//int main(){
//	char str[10] = { 0 };
//	strcpy(str, "haha");
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}