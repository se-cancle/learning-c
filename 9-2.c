#include<stdio.h>
#include<stdlib.h>
int IsLittleend(){
	int num = 0x11223344;
	int* p = &num;
	char* p2 = (char*)p;
	if (*p2 == 0X44){
		return 1;
	}
	return 0;
}
int main(){
	int a = -10;
	printf("%d\n", IsLittleend());
	system("pause");
	return 0;
}