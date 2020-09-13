#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;

}


//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = ++i + ++i + ++i;
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}


//int main(){
//	int i, input;
//	char num[34] = { 0 };
//	printf("请输入一个数（十进制）：");
//	scanf("%d", &input);
//	for (i = 31; i >= 0; i--, input /= 2){
//		num[i] = input % 2 + '0';	//把整数1转换成字符'1',然后存入字符变量中。
//	}
//	for (i = 1; i <= 31; i += 2){	//偶数位
//		putchar(num[i]);
//	}
//	putchar('\n');
//	for (i = 0; i <= 31; i += 2){	//奇数位
//		putchar(num[i]);
//	}
//	putchar('\n');
//	system("pause");
//	return 0;
//}




//int main(){
//	int a, b;
//	scanf("%d %d", &a, &b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}



//int Onecount(int n){
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++){
//		if ((n&(1 << i)) != 0){
//			count++;
//		}
//	}return count;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Onecount(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//int main(){
//	int a = 1999;
//	int b = 2299;
//	int c = a^b;
//	int count = 0;
//	for (int i = 0; i < 32; i++){
//		if ((c&(1 << i) )!= 0){
//			count++;
//		}
//	}printf("%d", count);
//
//	system("pause");
//	return 0;
//}
