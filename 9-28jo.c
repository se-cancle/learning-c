#include<stdio.h>
#include<stdlib.h>



//int main(){
//	char* p1 = "zhangsan";
//	char* p2 = "lisi";
//	char* p3 = "wangwu";
//	char*arr[] = { "zhangsan","lisi","wangwu" };
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		printf("%s\n", arr[i]);
//	}
//
//}
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//int Sortarr(int* arr, int size){
//	int i = 0;
//	int j = size - 1;
//	while (i < j){
//		while ((i<j)&&(arr[i] % 2 == 1)){
//			i++;
//		}
//		while ((i<j)&&(arr[j] % 2 == 0)){
//			j--;
//		}
//		if (i < j){
//			int tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//	}
	
	//while (i < j){
	//	if (arr[i] % 2 != 0){
	//		arr[i] = arr[i];
	//	}
	//	else{
	//		++i;
	//	}
	//	if (arr[j] % 2 == 0){
	//		arr[j] = arr[j];
	//	}
	//	else{
	//		--j;
	//	}
	//}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Sortarr(arr, size);
//	int i = 0;
//	for (i = 0; i < size; i++){
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}


//int main(){
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", &i);
//	for (i = 0; i < 10; i++){
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	system("pause");
//	return 0;
//}




//int main(){
//	int num = 0x11223344;
//	int
//
//}