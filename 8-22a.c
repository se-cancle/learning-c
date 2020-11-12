#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_leap_year(int year){
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int y = 0; 
	for (y = 1000; y <= 2000; y++){
		if (is_leap_year(y) == 1){
			printf("%d ", y);
		}
	}
	system("pause");
	return 0;
}




//int is_prime(int n){
//	int i = 0;
//	for(i; i <= sqrt(n); i++){
//		if (n%i == 0){
//			return 0;
//		}
//		return 1;
//	}
//}
//
//int main(){
//	int i = 0; for (i = 100; i <= 200; i++){
//		if (is_prime(i) == 1){
//			printf("%d ", i);
//		}
//	}
//
//	system("pause");
//	return 0;
//}





//void swap(int* a, int* b){
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main(){
//	int x = 0; 
//	int y = 0;
//	scanf("%d %d", &x, &y);
//    swap(&x, &y);
//	printf("%d %d",x,y);
//	system("pause");
//	return 0;
//}

//int get_max(int x, int y){
//	int z = 0;
//	if (x > y){
//		//return x;
//		z = x;
//	}
//	else{
//		//return y;
//		z = y;
//		return z;
//	}
//}
//
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int max=get_max(num1, num2);
//
//
//
//
//	printf("%d", max);
//	system("pause");
//	return 0;
//}









//int main(){
//	int i = 0;
//	int count;
//	for (i = 1; i < 100; i++){
//		if (i % 10 == 9){
//			count++;
//		}if (i / 10 == 9){
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//int main(){
//	int i = 0;
//	for (i = 100; i <= 200; i++){
//		int j = 0;
//		for (j = 2; j <i; j++){
//			if (i%j == 0){
//				break;
//			}
//         }
//		if(i==j){
//      printf("%d ", i);
//      }
//
//	system("pause");
//	return 0;
//}




//int main(){
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++){
//		if (year % 4 == 0 && year % 100 != 0){
//			printf("%d ", year);
//			count++;
//		}if (year % 400 == 0){
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	system("pause");
//	return 0;
//}