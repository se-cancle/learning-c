#include<stdio.h>
//#include<stdlib.h>

//两个int（32位）整数m和n的二进制表达式中，有多少个位（bit)不同

Bit_diff(int m,int n){
	int tmp= m^n;
	int count = 0;
	for (int i = 0; i < 32;i++){
		if(tmp&(1<<i)!=0){
			count++;
		}
	}return count;
}
int main(){
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int ret=Bit_diff(m, n);
	printf("%d", ret);
	return 0;
}




//交换两个数组的内容
//void Swap(int arr1[],int arr2[],int sz){
//	int i = 0;
//	for (i = 0; i < sz;i++){
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main(){
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1, arr2, sz);
//	for (int i = 0; i < sz;i++){
//		printf("%d ", arr1);
//
//	}printf("\n");
//	for (int i = 0; i < sz;i++){
//		printf("%d ", arr2);
//
//	}
//	return 0;
//}




//初始为0
//void Init(int* arr,int sz){
//	for (int i = 0; i < sz;i++){
//		arr[i] = 0;
//	}
////打印
//void print(int* arr, int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
////逆置
//void reverse(int* arr, int sz){
//	int left = 0;
//	int right = sz - 1;
//	if(left<right){
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//}
//
//int main(){
//	int arr[10] = { 1, 3, 5, 7, 8, 6, 2, 4, 9, 0 };
//		int sz = sizeof(arr) / sizeof(arr[10]);
//		Init(arr, sz);
//		print(arr, sz);
//		reverse(arr, sz);
//		print(arr, sz);
//		return 0;
//}
//



//冒泡排序
//void Bubble(int arr[],int sz){
//	int bound = 0;
//	int cur = sz - 1;
//	for (bound = 0; bound < sz;bound++){
//		for (cur = sz - 1; cur>bound;cur--){
//			//小到大
//		if(arr[cur]<arr[cur-1){
//			int tmp = arr[cur - 1];
//			arr[cur - 1] = arr[cur];
//			arr[cur] = tmp;
//		 }
//		}
//	}
//}
//int main(){
//	int arr[10] = { 1, 3,5,7,8,6,2,4,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int ret=Bubble(arr, sz);
//	printf("%d ", ret);
//
//	//int arr1[] = { 1, 2, (3, 4), 5 };
//	//printf("%d\n", sizeof(arr1));
//	//system("pause");
//	return 0;
//}