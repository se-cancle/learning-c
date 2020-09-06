#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//12
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16
	//printf("%d\n", sizeof(a[0]+1));//4
	//printf("%d\n", sizeof(*(a[0]+1)));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
	//printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16

	system("pause");
	return 0;
}

//int main(){
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&arr + 1);
//
//	printf("%d,%d", *(arr + 1), *(ptr - 1));
//	system("pause");
//	return 0;
//}