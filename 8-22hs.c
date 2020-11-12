#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//}
void  sum(int* n){
	n+=1;
}
int main(){
	int i = 0;
     sum(&i);
	printf("i=%d", i);
	system("pause");
	return 0;
}


//int mult(){
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%d ", j, i, j*i);
//		}printf("\n");
//	}
//}
//
//int main(){
//	mult();
//	/*int i = 0;
//	int j = 0;
//	int num = 0;
//	int n = 0; 
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%d ",i,j, i*j );
//		}printf("\n");
//	}*/
//	/*printf("%d*%d=%d ", i*j = num);*/
//	system("pause");
//	return 0;
//}











//void Swap(int*x, int*y){
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main(){
//	int a = 1;
//	int b = 2;
//	Swap(&a,&b);
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}




//int year(int i){
//	if ((i % 4 == 0 &&i % 100 != 0) || (i % 400 == 0)){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//		if (year(n) == 1){
//			printf("是闰年");
//		}if (year(n) == 0){
//			printf("不是闰年");
//		}
//	system("pause");
//	return 0;
//}








//int num(int n){
//	int i = 0;
//	for (i = 2; i<=sqrt(n);i++){
//		if (n%i == 0)
//			return 0;
//	}if (n == i)
//		return 1;
//}
//int main(){
//	int i = 0; 
//	for (i = 100; i <= 200; i++){
//		if (num(i) == 1){
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}


//int num(int m){
//		int j = 0;
//		for (j = 2; j < m; j++){
//			if (m%j == 0){
//				return 0;
//			}		
//		}if (m <= j)
//			return 1;
//	}
//int main(){
//	int i = 0;
//	for (i = 100; i <= 200; i++){
//		if (num(i)==1)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}