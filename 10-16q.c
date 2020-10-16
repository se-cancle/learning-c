//#include<stdio.h>
//#include<stdlib.h>
//
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//void Swap(int arr[], int left,int right) {
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//}
//
//void Sortarr(int* arr, int size){
//	int left= 0;
//	int right = size - 1;
//	while (left<right){
//		//从左边找一个偶数
//		while ( (left<right) && (arr[left] % 2 == 1) ) {
//			left++;
//		}
//		//从右边找一个奇数
//		while ((left<right) && (arr[right] % 2 == 0)) {
//			right--;
//		}
//		if (left < right){
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			
//
//		}
//	}
//	
//	/*int j = size - 1;
//	while (i < j){
//		while ((i < j) && (arr[i] % 2 == 1)){
//			++i;
//		}
//		while ((i < j) && (arr[j] % 2 == 0)){
//			++j;
//		}
//	}
//		if (i<j){
//			int tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}*/
//}
//void Printarr(int* arr, int size){
//	for (int i = 0; i < size; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Sortarr(arr, size);
//	Printarr(arr, size);
//
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

void Swap(int arr[], int left, int right) {
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
}

void Sortarr(int* arr, int size){
	int left = 0;
	int right = size - 1;
	while (left < right){
		//找奇数
		if (arr[left] % 2 == 1) {
			left++;
		}
		//找偶数
		else if (arr[right] % 2 == 0){
			right--;
		}
		//奇数在前，偶数在后
		Swap(arr, left, right);

	}
}
void Printarr(int* arr, int size){

	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = { 2, 12, 12, 5, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Sortarr(arr, size);

	Printarr(arr, size);

	system("pause");
	return 0;
}