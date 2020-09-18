
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main(){
//	int a = 0;
//	int m = 0;
//	scanf("%d %d", &a,&m);
//	int q = 0;
//	int sn = 0;
//	for (int i = 0; i <m; i++){
//		q=q * 10 + a;
//		sn += q;
//	}
//	printf("%d", sn);
//	system("pause");
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int main(){
//	int i = 1;
//	for (i = 1; i < 100000; i++){
//	int n = 1;
//	int sum = 0;
//	int tmp=i ;
//	//计算几位数n
//	while (tmp / 10){
//		n++;
//		tmp = tmp / 10;
//	}
//	 tmp = i;
//	while (tmp){
//		sum += pow(tmp % 10, n);
//		tmp=tmp / 10;
//		}
//	if (sum== i){
//		printf("%d ", sum);
//	}
//
// }
//	system("pause");
//	return 0;
//}


//打印菱形

int main(){
	int n = 0; 
	scanf("%d", &n);
	int i = 1;
	int j= 1;
	for (i = 1; i <=n/2+1; i++){
		for (j = 1; j <= n/2 - i+1; j++){
			printf(" ");
		}
		for (j = 1; j <= 2 * i-1 ; j++){
			printf("*");
		}
		printf("\n");
	}
	for (i = n/2; i >0; i--){
		for (j = 1; j <= (n / 2 +1)- i; j++){
			printf(" ");
		}
		for (j = 1; j < 2 * i ; j++){
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}