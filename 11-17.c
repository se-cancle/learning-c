#include <stdio.h>
#include <stdlib.h>

//#define MAX(x,y)  ((x)>(y)?(x):(y))
//
//int Max(int x, int y){
//	return x > y ? x : y; 
//}
//int main () {
//	int a = 10;
//	int b = 20;
//	//ºê
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	//º¯Êý
//	max = MAX(a, b);
//	printf("%d\n", max);
//
//system("pause");
//return 0;
//}

#define MALLOC(num,type)  (type*)malloc(num*sizeof(type))
int main(){
	//malloc(10 * sizeof(int));
	//Malloc(10, int);
	MALLOC(10, int);

	return 0;
}