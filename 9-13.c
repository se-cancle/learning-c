#include<stdlib.h>
#include<stdio.h>
const char* Strstr(const char*str1, const char*str2){
	//assert(str1 != NULL&&str2 != NULL);
	if (*str2 == '\0'){
		//str2ÊÇÒ»¸ö¿Õ×Ö·û´®
		return NULL;
	}
	char* black = str1;
	while (*black != '\0'){
		char* red = black;
		char*sub = str2;
		while (*red != '\0'&&*sub != '\0' && (*red == *sub)){
			red++;
			sub++;
		}
		if (*sub == '\0'){
			return black;
		}if (*red == '\0'){
			return NULL;
		}
		black++;
	}
	return NULL;
}

int main(){
	char str1[] = "hello world";
	char str2[] = "world";
	char* ret = Strstr(str1, str2);
	printf("%p %p\n", str1,ret);
	system("pause");
	return 0;
}