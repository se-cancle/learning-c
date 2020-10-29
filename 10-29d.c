#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Leftmove(char* str, int k){
	int len=strlen(str);
	for (int i = 0; i < k; i++){
		/*int tmp = str[0];
		for (int j = 0; j < len; j++){
			str[j] = str[j + 1];
		}
		str[len - 1] = tmp;*/
		int tmp = *str;
		for (int j = 0; j < len; j++){
			*(str+j) = *(str+j + 1);
		}
		*(str+len - 1) = tmp;
	}
}


int main()
{
	char str[] = "ABCDEF";
	int k = 0;
	scanf("%d", &k);
	Leftmove(str,k);
	printf("%s",str);
	system("pause");
	return 0;
}

