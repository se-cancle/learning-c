#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//结构体定义和初始化
//struct Book{
//	char name[20];
//	int price;
//};
//typedef struct Book{
//	char name[20];
//	int price;
//}book;

//struct Book{
//	char name[20];
//	int price;
//}b3;
//int main(){
//	/*struct Book b1;
//	strcpy(b1.name, "c语言");
//	b1.price = 55;*/
//
//	//book b2;
//	//strcpy(b2.name, "c语言");
//	//b2.price = 55;
//	//printf("%s %d\n", b2.name, b2.price);
//	
//	
//	/*strcpy(b3.name, "c语言");
//	b3.price = 55;
//	printf("%s %d\n", b3.name, b3.price);*/
//
//	system("pause");
//	return 0;
//
//}
struct Stu{
	char name[20];
	int age;

};

//结构体访问两种方法
//void print1(struct Stu s){
//	printf("%s %d\n", s.name, s.age);
//}

void print2(struct  Stu* s){
	//printf("%s %d\n", (*s).name, (*s).age);
	printf("%s %d\n", s->name, s->age);
}
int main(){
	struct Stu s = { "张三", 19 };
	//print1(s);  //传值调用
	print2(&s);//传止调用
	system("pause");
	return 0;
}