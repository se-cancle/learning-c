#include<stdio.h>
#include<stdlib.h>

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
void init_arr(int arr[], int sz){
	int i = 0;
	for(i = 0; i < sz; i++){
     arr[i] =0;
	}
}
void print_arr(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main(){
	int arr[10] = { 1, 3, 4, 5, 9, 7, 6, 8, 2, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init_arr(arr,sz);
	print_arr(arr, sz);

	reverse(arr, sz);
	print_arr(arr, sz);

	system("pause");
	return 0;
}
 
//void bubble_sort(int arr[],int sz){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++){
//		for (j = 0; j <sz-1-i ; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[10] = { 9, 6, 8, 3, 5, 1, 4, 7, 2, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr, sz);
//
//	system("pause");
//	return 0;
//}