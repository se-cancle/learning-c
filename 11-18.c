#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(){
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}
//int main(){
//	//int n=0;
//	//scanf("%d",&n);
//	int n = 1234;
//	printf("%#o\n",n);
//	printf("%#X\n",n);
//
//	return 0;
//}

int main() {
	int weight = 0, height = 0;
	scanf("%d %d", &weight, &height);
	printf("%.2f\n", weight / (height / 100.f * height / 100.f));
	return 0;
}