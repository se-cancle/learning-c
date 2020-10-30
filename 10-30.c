#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d", &n);
	int arr[100][100] = { 0 };
	for (i = 0; i <n; i++){
		for (j = 0; j <= i; j++){
			if (j == 0 || i == j){
				arr[i][j] = 1;
			}
			else{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}printf("%d ", arr[i][j]);
		}printf("\n");
	}
	system("pause");
	return 0;
}
int main(){
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d", &n);
	int arr[100][100] = { 0 };
	for (i = 0; i < n; i++){
		for (j = 0; j <= i; j++){
			if (j == 0 || i == j){
				arr[i][j] = 1;
			}
			else{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j] ;
			}
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}