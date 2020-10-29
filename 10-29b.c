#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Findnum(int arr[3][3], int n){
	int row = 0;
	int col = 2;
	int tmp = arr[row][col];
	while (row >= 0 && row < 3 && col>=0 && col < 3){
		if (n <tmp){
			tmp = arr[row][--col];
		}
		else if (n>tmp){
			tmp = arr[++row][col];
		}
		else{
			return 1;
		}
	}
	return 0;
				
}

int main(){
	int arr[3][3] = { { 3, 6, 7 }, { 5, 9, 10 }, { 8, 15, 16 } };
	int n = 0;
	printf("请输入要查找的数：");
	scanf("%d", &n);
	int ret=Findnum(arr, n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}