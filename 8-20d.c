//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int num = 0;
	int i = 0;
	for (num = 1; num <= 100; num++){

		if (num % 10 == 9){
			i++;
			//printf("%d ", num);
		}
	}
	printf("%d", i);
	system("pause");
	return 0;
}




//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++){
//		for (j = 2; j<i; j++){
//			if (i%j == 0){
//				break;
//			}
//		}
//		if (i == j){
//			printf("%d ", i);
//		}
//	}
//	//printf("%d ", i);
//	system("pause");
//	return 0;
//}








//int main(){
//	int year=0;
//	for (year = 1000; year <= 2000; year++){
//		if (year % 4 == 0 && year % 100 != 0){
//			printf("%d ", year);
//		}
//		if (year % 400 == 0){
//			printf("%d ", year);
//		}
//	}
//	//printf("%d", year);
//	system("pause");
//	return 0;
//}






//int main(){
//	int a = 0; 
//	int b = 0;
//	int c=0;
//	scanf("%d %d", &a, &b);
//	while (c= a%b){
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	system("pause");
//	return 0;
//
//}





//int main(){
//	int a = 0; 
//	int b = 0;
//	int min = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b){
//		min = b;
//	}
//	else{
//		min = a;
//	}
//	for (i = min; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0){
//			break;
//		}
//	}
//	printf("%d\n", i);
//
//
//
//
//
//
//
//	/*int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//
//	for (j = 1; j <= 10; j++){
//		for (i = 1; i <= j; i++){
//			ret *= i;
//		}
//		sum += ret;
//	}*/
//	system("pause");
//	return 0;
//}