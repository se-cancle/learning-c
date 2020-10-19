#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

int Findn(int arr[4][4], int n){
	int row = 0;
	int col = 3;
	int cur = arr[row][col];
	while(row >= 0 && row < 4 && col >= 0 && col < 4){
		if (n < cur){
			cur = arr[row][--col];
		}
		else if (n>cur){
			cur = arr[++row][col];
		}
		else{
			return 1;
	}	
   }
	return 0;
}
int main(){
	int arr[4][4] = { 1, 2, 3, 4, 5, 8, 9, 10, 6, 11, 13, 14, 7, 21, 24, 29 };
	int n = 0;
	printf("输入查找的数：");
	scanf("%d", &n);
	printf("%d\n", Findn(arr, n));
	system("pause");
	return 0;
}




