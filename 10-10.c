#include<stdio.h>
#include<stdlib.h>
//void test1(int* p){
//
//}
//void test2(char* p){
//
//}
//int main(){
//
//	char ch = 'w';
//	char* pc = &ch;
//	char arr2[5];
//
//	test2(arr2);
//	test2(&ch);
//	test2(pc);
//
//	int a = 10;
//	int* ptr = &a;
//	int arr[10];
//	test1(&a);
//	test1(ptr);
//	test1(arr);
//
//	system("pause");
//	return 0;
//}


//void test(int** p){
//}
//
//int main(){
//	int* p1;
//	int**ptr;
//	int* arr[5];
//	test(ptr);
//	test(&p1);
//	test(arr);
//	system("pause");
//	return 0;
//}

int Add(int x, int y){
	return x + y;
}
int my_strlen(const char* str){
	return 0;
}
int main(){
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int(*p)[10] = &arr;//取出数组的地址，p就是数组指针


	//函数指针
	//是一个指向函数的指针——存放函数的地址
	//int (*pf)(int,int) = &Add;
	int(*pf)(int, int) = Add;


	int sum = (*pf)(2, 3);
	printf("%d\n", sum);
	//sum = Add(2, 3);
	sum = pf(2, 3);
	printf("%d\n", sum);
	int (*ps)(const char*) = &my_strlen;

	printf("%p\n", &Add);
	printf("%p\n", Add);
	system("pause");
	return 0;


}