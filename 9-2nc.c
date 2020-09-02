#include<stdio.h>
#include<stdlib.h>

int main(){
	unsigned char i = 0;
	for (i = 0; i <= 255; i++){
		printf("hello world\n");
	}
	//char a = -1;
	//signed char b = -1;
	//unsigned char c = -1;
 //  printf("a=%d,b=%d,c=%d", a, b, c);

	/*char a = -128;
	printf("%u", a);*/

	/*char a = 128;
	printf("%u\n", a);*/

	/*int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);*/

	/*unsigned int i;
	for (i = 9; i >= 0; i--){
		printf("%u\n", i);
	}*/

	/*char a[1000];
	int i;
	for (i = 0; i < 1000; i++){
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));*/



	system("pause");
	return 0;
}