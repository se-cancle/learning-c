#include<stdio.h>
#include<stdlib.h>
int main(){
	/*int a = 9;
	int* p = &a;
	float* p2 = (float*)p;
	printf("%f", *p);
	*p2 = 10.0;
	printf("%d", *p);*/
#define E 1e-4
	float i = 19.0;
	float j = i/7.0;
	/*if (j*7.0 == i)*/
	if(j*7.0-i<E&&j*7.0-i>-E){
		printf("相等\n");
	}
	else{
		printf("不相等\n");
	}
	system("pause");
	return 0;
}