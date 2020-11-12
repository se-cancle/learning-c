#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int  DigitSum(int i){
	if (i>9){
		return 	DigitSum(i / 10) + i % 10;
	}else
	 return i;
}
int main(){
	int n = 1729;
	/*scanf("%d", &n);*/
	int ret = DigitSum(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
//·ÇµÝ¹é
//int power(int m, int w){
//	int ret =1;
//	int i = 1;
//	if (m <= 1){
//		return 1;
//	} else if (m > 1){
//		for (i = 1; i <= w; i++){
//			ret *= m;
//		}
//		printf("%d", ret);
//	}
//}
//int power(int m, int w){
//	if (w == 0){
//		return 1;
//	}
//	else if (w == 1){
//		return m;
//	}
//	else{
//		return m*power(m, w - 1);
//	}
//}
//int main(){
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret =power(n,k);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
