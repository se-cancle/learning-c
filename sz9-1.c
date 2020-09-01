#include<stdio.h>
#include<stdlib.h>
int swap(int arr1[], int arr2[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	
}
int main(){
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	swap(arr1, arr2, sz);
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ",arr1[i]);
	}printf("\n");
	for (i= 0; i< sz; i++){
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}



//void init(int arr[], int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}printf("\n");
//}
//void reverse(int arr[], int sz){
//	int left = 0;
//	int right = sz - 1;
//	int i = 0; 
//	
//		for (i = 0; i < sz; i++){
//		while (left < right){
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 6, 7, 9, 5, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	system("pause");
//	return 0;
//}



//int Bubble_arr(int arr[], int sz){
//	int i = 0;
//	for (i = 0; i < sz - 1; i++){
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;		
//			}		
//		}
//	}
//}
//
//void Print_arr(int arr[], int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//
//int main(){
//	int arr[10] = { 9, 7, 5, 6, 3, 8, 1, 4, 2, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_arr(arr,sz);
//	Print_arr(arr, sz);
//	system("pause");
//	return 0;
//}