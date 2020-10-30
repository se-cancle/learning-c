#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//奇数在前面，偶数在后面
void sortarr(int arr[], int sz){
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while(left<right){
		if (arr[left] % 2 != 0){
			left++;
		}if (arr[right] % 2 == 0){
			right--;
		}
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sortarr(arr, sz);
	for (int i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}