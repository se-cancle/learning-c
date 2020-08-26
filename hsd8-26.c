#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//斐波那契数列
//int fib(int n){
//	if (n <= 2){
//		return 1;
//	}
//	else{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
int fib(int n){
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2){
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main(){
	int n = 0; 
	scanf("%d", &n);
	int ret = fib(n);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}





//n的阶乘
//int Fac(int n){
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++){
//		ret *= i;
//	}
//	return ret;
//}

//int Fac(int n){
//	if (n <= 1){
//		return 1;
//	}
//else
//	return n*Fac(n - 1);
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}










//#include"calc.h"
//my_strlen(char* str){
//	int count = 0;//计数器，统计字符的个数
//	while (*str != '0'){
//		count++; 
//		str++;
//	}
//	return count;
//}

//my_strlen(char* str){
//	if(*str != '\0'){
//		return 1 + my_strlen(str + 1);
//	}
//else
//	return 0;
//}
//int main(){
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}





//void print(int n){
//	if (n > 9){
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main(){
//	unsigned int num = 0;
//	scanf("%d", &num);//1234--->1 2 3 4
//	print(num);	
//	system("pause");
//	return 0;
//}






////递归 栈溢出错误
//int main(){
//	printf("hehe\n");
//	main();
//	system("pause");
//	return 0;
//}






//int main(){
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	ret = Sub(a, b);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//






//int main(){
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
//
//	system("pause");
//	return 0;
//}