#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void left_move(char* str, int n){
	int len = strlen(str);
	for (int i = 0; i < n; i++){
		char tmp = *str;
		for (int j = 0; j < len - 1; j++){
			*(str + j) = *(str + j + 1);
		}
		*(str + len - 1) = tmp;
	}
}
int main(){
	char arr1[] = "abcdef";
	char arr2[] = "cdqfab";
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++){
		left_move(arr1, 1);
		if (strcmp(arr1, arr2) == 0){
			printf("YES\n");
			break;
		}
	}if (i == len){
		printf("NO\n");
	}
	system("pause");
	return 0;
}