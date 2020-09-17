#include<stdio.h>
#include<stdlib.h>

int print(int* p,int size){
//int print(int arr[],int size){
	for (int i = 0; i < size; i++){
		printf("%d ", *(p + i));
	}
}
int main(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = print(arr,size);
	//int ret = print(p, size);
	system("pause");
	return 0;
}



//int main(){
//
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//
//
//	/*unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));*/
//	/*int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	system("pause");
//	return 0;
//}