#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(){

	char str[100];
	scanf("%[^\n]", str);

	for (char* i = str + strlen(str) - 1; i >= str; --i){
		if (*i == ' '){
			printf("%s ", i + 1);
			*i = 0;
		}
	}
	printf("%s\n", str);


	return 0;
}