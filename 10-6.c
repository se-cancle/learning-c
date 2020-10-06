#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



int main(){
	//int arr[] = { 1, 2, 3, 4 };
	/*printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr + 1));*/
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(*&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//pritnf("%d\n", sizeof(&arr[0]));
	//printf("%d\n", sizeof(&arr[0]+1));


	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr+1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));



	system("pause");
	return 0;
}
//函数指针

////回调函数
//typedef int(*Cmp)(int ,int);
//void bubble(int arr[], int size, Cmp cmp){
//	int bound = 0;
//	for (bound = 0; bound < size; bound++){
//		int cur = size - 1;
//		for (; cur < bound; cur--){
//			if (cmp(arr[cur - 1], arr[cur]) == 1){
//				int tmp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = tmp;
//			}
//		}
//	}
//}
//
//int Less(int x, int y){
//	return x < y ? 1 : 0;
//}
//int main(){
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
//	
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, size, Less);
//	int i = 0;
//	for (i = 0; i < size; i++){
//		printf("%d ", arr[i]);
//	}printf("\n");
//	system("pause");
//	return 0;
//}
//转移表简化代码
//int Add(int x, int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int Mul(int x, int y){
//	return x * y;
//}
//int Div(int x, int y){
//	return x /y;
//}
//int main(){
//	printf("1.Add\n"); 
//	printf("2.Sub\n");
//	printf("3.Mul\n");
//	printf("4.Div\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	int ret = 0;
//	typedef int(*Func)(int,int);
//	Func table[] = {
//		Add,
//		Sub,
//		Mul,
//		Div
//	};
//	ret = table[choice-1 ](10, 20);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}


//int main(){
//	int arr[10] = { 0 };
//	printf("arr=%p\n", arr);
//
//	printf("arr+1=%p\n", arr+1);
//	printf("&arr=%p\n", &arr);
//	printf("&arr+1=%p\n", &arr+1);
//	system("pause");
//	return 0;
//}
//数组指针
//void print_arr1(int arr[3][5], int row,int col){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++){
//		for (j = 0; j < col; j++){
//			printf("%d ", arr[i][j]);
//		}printf("\n");
//	}
//}
//void print_arr2(int (*arr)[5], int row, int col){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++){
//		for (j = 0; j < col; j++){
//			printf("%d ", arr[i][j]);
//		}printf("\n");
//	}
//}
//int main(){
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//
//	print_arr2(arr, 3, 5);
//
//
//	system("pause");
//	return 0;
//}




//指针数组
//int main(){
//	char* p1 = "zhangsan";
//	char* p2 = "lisi";
//	char* p3 = "wangwu";
//	char* arr[] = { p1, p2, p3 };
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		printf("%s ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}
//int main(){
//	int arr1[] = { 1, 2, 3 };//arr1-int*
//	int arr2[] = { 4, 5, 6 };
//	int arr3[] = { 7, 8, 9 };
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		//printf("%d ", *arr[i]);//1,4,7
//		int j = 0;
//		for (j = 0; j < 3; j++){
//			printf("%d ", arr[i][j]);
//		}printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//void Move_arr(int* arr, int size){
//	int left = 0;
//	int right = size - 1;
//	while (left < right){
//		while (left < right&&arr[left] % 2 == 1){
//			left++;
//		}
//		while (left < right&&arr[right] % 2 == 0){
//			right--;
//		}if (left < right){
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print_arr(int* arr, int size){
//	for (int i = 0; i < size; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//     Move_arr(arr, size);
//	 print_arr(arr, size);
//
//	system("pause");
//	return 0;
//}
