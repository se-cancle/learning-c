#include<stdio.h>
#include<stdlib.h>
void print_arr(int arr[3][4], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0;i < row; i++){
		for (j = 0; j<col; j++){
			printf("%d ", arr[i][j]);
		}
	}
}

int main(){
	int arr[3][4] = { 1, 3, 2, 4, 5, 6, 7, 8, 2, 3, 6, 7 };
	print_arr(arr, 3, 4);
	system("pause");
	return 0;
}





//int bubble_sort(int arr[],int sz){
//	int i = 0;
//	for (i = 0; i < sz-1; i++){
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++){
//			if (arr[j]>arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[],int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//
//int main(){
//	int arr[10] = { 1, 7, 9, 8, 4, 5, 6, 2, 3, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr,sz);
//
//	system("pause");
//	return 0;
//}



//int main(){
//
//	/*int arr1[3][4] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	int i = 0;
//	int*p = &arr1[0][0];
//	for (i = 0; i <12; i++){
//		printf("%d ", *p);
//		p++;
//		}*/
//
//	//int i = 0;
//	//int j = 0;
//	//int arr1[3][4] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	//for (i = 0; i < 3; i++){
//	//	for (j = 0; j < 4; j++){
//	//		printf("%d ", arr1[i][j]);
//	//		//printf("arr[%d][%d]=%p\n",i,j, &arr1[i][j]);
//	//	}
//	//}
//
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int* p = &arr;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++){
//		printf("%d ", *p);
//		p++;
//	}
//	//
//	//	//printf("%d ",arr[i]);
//	//	printf("%p\n", &arr[i]);
//	//}
//	system("pause");
//	return 0;
//}