#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n = 0;
	scanf("%d", &n);
	//ż��λ
	for (int i = 31; i >= 1; i -= 2){
		printf("%d ", (n >> i) & 1);
	}printf("\n");
	//����λ
	for (int i = 30; i >= 0; i -= 2){
		printf("%d ", (n >> i) & 1);
	}
	system("pause");
	return 0;
}