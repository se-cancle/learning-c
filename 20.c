#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++){
		arr[i]=i;
	}
	system("pause");
	return 0;
}

//打印整数二进制的奇数位和偶数位
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 31; i >= 1; i -= 2){
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2){
//		printf("%d ", (n >> i)&1);
//	}
//	system("pause");
//	return 0;
//}


//两个int整数M和n的二进制表达式中，有多少个位（bit)不同
//int Bit_diff(int m, int n){
//	int i = 0;
//	int count = 0;
//	int tmp = m^n;
//	while (tmp){
//		tmp = tmp&(tmp - 1);
//	/*for (i = 0; i < 32; i++){
//		
//		if ((tmp & (1 << i)) != 0) { */// tmp & (1 << i) 优先级问题 带括号
//			count++;
//		}
//	return count;
//	}
//int main(){
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = Bit_diff(m, n);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}