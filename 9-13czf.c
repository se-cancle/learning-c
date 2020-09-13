#include<stdio.h>
#include<stdlib.h>
int main(){
	char a = 3;
	char b = 127;
	char c = a + b;
	//a和b发生整型提升

	short s = 0;
	short d = a + s;
	printf("%d\n", d);
	printf("%d\n", c);


//
//struct Book{
//	char name[20];
//	int price;
//};
//int main(){
//	struct Book b = { "c语言程序设计", 35 };
//	struct Book* pb = &b;
//	printf("书名:%s 定价:%d\n", pb->name, pb->price);
//	printf("书名:%s 定价:%d\n", b.name, b.price);
//
//void test(){
//	printf("test\n");
//}
//int main(){
//	printf("hehe\n");
//	test();



	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 4);
	printf("%p\n", &arr[4]);
	printf("%d\n", *(arr + 4));
	printf("%p\n", &4[arr]);
	printf("%d\n", 4[arr]);
	printf("%d\n", arr[4]);*/

	/*int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d", c);*/
	/*int a = 10;
	int b = 20;
	int max = 0;
	max =a>b? a : b;
	printf("%d\n",max);*/
	system("pause");
	return 0;
}