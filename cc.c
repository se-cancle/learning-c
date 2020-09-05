#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Add(int x, int y){
	return x + y;
}
int Sub(int x, int y){
	return x - y;
}
int Mul(int x, int y){
	return x*y;
}
int Div(int x, int y){
	return x / y;
}
int main(){
	printf("**********\n");
	printf("1.Add\n");
	printf("2.Sub\n");
	printf("3.Mul\n");
	printf("4.div\n");
	printf("**********");
	int choice = 0;
	scanf("%d", &choice);
	int ret = 0;
	/*if (choice == 1){
	ret = Add(10, 20);
	}
	else if (choice == 2){
	ret = Sub(10, 20);
	}
	else if (choice == 3){
	ret == Mul(10, 20);
	}
	else if(choice == 4){
	ret = Div(10, 20);
	}*/
	typedef int(*Func)(int, int);
	Func table[] = {
		Add,
		Sub,
		Mul,
		Div
	};
	ret = table[choice-1](10, 20);
	printf("%d", ret);
	system("pause");
	return 0;
}

////void test(int arr[3][5]){
////}
//void test(int* arr[5]){
//}
//int main(){
//	/*int arr[3][5] = { 0 };
//	test(arr);*/
//	system("pause");
//	return 0;
//}