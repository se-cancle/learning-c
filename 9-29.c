#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main(){
//	unsigned int i;
//	for (i = 9; i >= 0; i--){
//		printf("%u\n", i);
//	}
//	system("pause");
//	return 0;
//}


//int main(){
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++){
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	system("pause");
//	return 0;
//}
//unsigned char i = 0;
//int main(){
//	for (i = 0; i <= 255; i++){
//		printf("hello world\n");
//	}
//	system("pause");
//	return 0;
//}

//int main(){
//	int i = 0x11223344;
//	int* p = &i;
//	char* p1 = (char*)p;
//	if (*p1 == 44){
//		printf("小端\n");
//	}
//	else{
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}


int main(){
	int n = 9;
	//0000 0000 0000 0000 0000 0000 0000 1001
	float* pFloat = (float*)&n;
	printf("n的值为:%d\n", n);
	printf("*pFloat的值为:%f\n", *pFloat);
	//*pFLoat
	//0 00000000 00000000000000000001001
	//(-1)^0*0.0000000000000000001001*2^-126
	//0.000000
	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//(-1)^0*1.001*2^3
	//0 10000010 00000000000000000000000
	//4294967295
	printf("n的值为:%d\n", n);//4294967295
	printf("*pFloat的值为:%f\n", *pFloat);
	system("pause");
	return 0;
}