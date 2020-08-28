#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

////void reverse_string(char arr[]){
////	char tmp = arr[0];
////	int len = strlen(arr);
////	arr[0] = arr[len-1];
////	arr[len-1] = '\0';
////	if (strlen(arr + 1) > 1){
////		reverse_string(arr + 1);
////	}
////	arr[len - 1] = tmp;
////}

int my_strlen(char* str)
{
	﻿   int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[]){
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (strlen(arr + 1) > 1){
		reverse_string(arr + 1);
	}
	arr[len - 1] = tmp;
}
int main(){
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}



//int main(){
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%-2d ", i, j, i*j);//-2d左对齐，2d右对齐
//		}
//		printf("\n");
//	}
//	
//	system("pause");
//	return 0;
//}






//int main(){
//	int arr[10] = { 0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++){
//		if (max < arr[i]){
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}





//
//int main(){
//	float i = 1;
//	int j = 1;
//	float n = 0;
//	float sum = 0;
//	for (i = 1; i <= 100; i++){
//		n = j / i;
//		j *= -1;
//		sum += n;
//	}
//	printf("%f", sum);
//	system("pause");
//	return 0;
//}










//第n个斐波那契数。
//递归
//int Fib(int n){
//	if (n <=2){
//		return 2;
//	}else
//	return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int m){
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (m > 2){
//		c = a + b;
//		a = b;
//		b = c;
//		m--;
//	}
//	return c;
//}
//int main(){
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}