#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int tmp;
	if (a < b){
		tmp = a;
		a = b;
		b = tmp;
	}
	 if (b < c){
		tmp = b;
		b = c;
		c = tmp;
	}
	 if (a < b){
		tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d %d %d", a, b, c);
	system("pause");
	return 0;
}