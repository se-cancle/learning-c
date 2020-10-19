#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Leftmove(char str1[]){
	int len = strlen(str1);
	char tmp= str1[0];
	for (int i = 0; i < len; i++){
		str1[i - 1] = str1[i];
	}
	str1[len - 1] = tmp;
}

int  Rotatecmp(char str1[], char str2[]){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2){
		return 0;
	}
	for (int i = 0; i < len1; i++){
		if (strcmp(str1, str2) == 0){
			return 1;
		}
		else{
			Leftmove(str1);
		}
	}
}
int main(){
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	int ret=Rotatecmp(str1, str2);
	printf("%d", ret);
	system("pause");
	return 0;
}

//void leftRotateone(char str[], int len){
//	char tmp = str[0];
//	for (int i = 1; i < len; i++){
//		str[i - 1] = str[i];
//	}
//	str[len - 1] = tmp;
//}
//
//int  RotateCmp(char str1[], char str2[]) {
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len2 != len2) {
//		return 0;
//	}
//	for (int i = 0; i < len1; i++) {
//		if (strcmp(str1, str2) == 0) {
//			return 1;
//		}
//		else {
//			leftRotateone(str1, len1);
//		}
//	}
//}
//
//int main(){
//	char str1[] = "AABCD";
//	char str2[] = "BCDAA";
//	printf("%d\n", RotateCmp(str1, str2));
//
//	system("pause");
//	return 0;
//}
