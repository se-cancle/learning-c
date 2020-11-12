#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main () {
	int a = 0;
	int b = 0;
	int c = 0;	
	while (scanf("%d%d%d", &a, &b, &c) != EOF){
		if (a + b <= c || a + c <= b || b + c <= a){
			printf("Not a triangle!\n");
		}
		else if (a == b&&a == c){
			printf("Equilateral triangle!\n");
		}
		else if (a == b || b == c || a == c){
			printf("Isosceles triangle!\n");
		}
		else{
			printf("Ordinary triangle!\n");
		}
	}
system("pause");
return 0;
}


