#include<stdio.h>
#include<stdlib.h>
//typedef struct Test{
//	int i;
//	int arr[];
//}Test;
//typedef struct Test2{
//	int i;
//	int* arr;
//}Test2;
//
////int main(){
////	//Test2
////	Test2* t2 = (Test2*)malloc(sizeof(Test2));
////	t2->arr = (int*)malloc(sizeof(int) * 10);
////	//t2->arr =>(*t2).arr
////	free(t2->arr);
////	free(t2);
////
////
////	//Test
////	Test* t = (Test*)malloc(sizeof(Test)+sizeof(int)*10);
////
////	system("pause");
////	return 0;
////}


//为了实现左旋，分两个步骤
//先实现一个函数，一次左旋一个字符
//再实现一个函数，一次左旋N个字符
//void LeftRotateOne(char str[], int size){
//	//如果长度是1的话，就没有必要旋转了
//	if (size == 1){
//		return;
//	}
//	//长度超过1的时候，
//	//1.先把0号下标的元素备份一下
//	char tmp = str[0];
//	//2.把1 号下标开始的元素依次往左移动
//	for (int i = 1; i < size; i++){
//		str[i - 1] = str[i];
//	}
//	//3.把刚才备份的字符放到最后一个元素的位置上
//	str[size - 1] = tmp;
//}
////n太大了的话，效率较低
//void LeftRotateN(char str[], int size, int n){
//	for (int i = 0; i < n%size; i++){
//		LeftRotateOne(str, size);
//	}
//}
//
//int RotateCmp(char str1[], char str2[]){
////可以把str1进行左旋若干次，每次左旋后都和str2比较一下，如果左旋n次后还不相等，此时认为不是左旋得到的
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2){
//		return 0;
//	}
//	for (int i = 0; i < len1; ++i){
//		if (strcmp(str1, str2) == 0){
//			return 1;
//		}
//		LeftRotateOne(str1, len1);
//	}
//	return 0;
//}
//
//int main(){
//	char str[] = "ABCD";
//	LeftRotateN(str, 4, 3);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}


//int main(){
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//	int* arr4[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		int j = 0;
//		for (j = 0; j < 4; j++){
//			printf("%d ", arr4[i][j]);				
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//int main(){
//	int a = 10;
//	int* p=&a;
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int(*pa)[5]=&arr;//&arr拿到的是数组的地址
//	system("pause");
//	return 0;
//}


//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//1
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("%d ",*(p + i));
//	}
//
//	//2
//	/*int(*p)[] = &arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("%d ", (*p)[i]);
//	}*/
//	system("pause");
//	return 0;
//}
void print1(int arr[3][5], int x, int y){
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
}
//void print(int arr[], int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
void print(int* arr, int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
}
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < 3; i++){
		int j = 0;
		for (j = 0; j < 5; j++){
			printf("%d ", (*(p + i)[j]));
		}
	}
}
	//数组指针的使用，一般常见于二维数组
int main(){
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	int arr2[] = { 1, 2, 3, 4, 5 ,6};
	print(arr2, 6);
	system("pause");
	return 0;
}