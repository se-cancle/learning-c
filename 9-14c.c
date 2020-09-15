#include<stdlib.h>
#include<stdio.h>


//int main(){
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//    printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double * ));
//	printf("%d\n", sizeof(long *));
//	printf("%d\n", sizeof(long long*));
//	system("pause");
//	return 0;
//}

//int main(){
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	system("pause");
//	return 0;
//}

//stsatic修饰函数，只能在自己所在源文件内部使用
//int main(){
//	printf("%d\n", Add(2, 3));
//	system("pause");
//	return 0;
//}

//stsatic修饰全局变量，只能在自己所在源文件内部使用


//int main(){
//	printf("%d\n", g_val);
//	system("pause");
//	return 0;
//}


//static修饰局部变量，改变了局部变量的生命周期
//void test(){
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main(){
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		test();
//	}
//	system("pause");
//	return 0;
//}

//void test(){
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main(){
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		test();
//	}
//	system("pause");
//	return 0;
//}
//int main(){
//	int i = -20;
//	printf("%d\n", i);
//	/*char a = 128;
//	printf("%u\n", a);*/
//	system("pause");
//	return 0;
//}


//int main(){
//	char a = -128;
//	//1000 0000   char a=-128->int->unsigned int
//	//1000 0000 0000 0000 0000 0000 1000 0000  -128原码
//	//1111 1111 1111 1111 1111 1111 0111 1111  -128反码
//	//1111 1111 1111 1111 1111 1111 1000 0000  -128补码
//	//%u打印无符号的十进制的整数
//	printf("%u\n", a);//4294967168(十进制）
//	system("pause");
//	return 0;
//}

//int main(){
//	char a = -1;
//	//1111 1111
//	//1111 1111 1111 1111  1111 1111 1111 1111  -1的补码
//	signed char b = -1;
//	//与char没有区别
//	unsigned char c = -1;
//	//1111 1111  unsigned char没有符号位，高位直接补0
//	//0000 0000 0000 0000 0000 0000 1111 1111
//	//255
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	system("pause");
//	return 0;
//}







//判断大端还是小端
//int IsLittleEnd(){
//	int num = 0x11223344;
//	int* p = &num;
//	char * p2 = (char*)p;
//	if (*p2 == 0x44){
//		return 1;
//	}return 0;
//}
//int main(){
//
//	printf("%d\n", IsLittleEnd());
//	system("pause");
//	return 0;
//}