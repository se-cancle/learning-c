#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ṹ�嶨��ͳ�ʼ��
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
//	strcpy(b1.name, "c����");
//	b1.price = 55;*/
//
//	//book b2;
//	//strcpy(b2.name, "c����");
//	//b2.price = 55;
//	//printf("%s %d\n", b2.name, b2.price);
//	
//	
//	/*strcpy(b3.name, "c����");
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

//�ṹ��������ַ���
//void print1(struct Stu s){
//	printf("%s %d\n", s.name, s.age);
//}

void print2(struct  Stu* s){
	//printf("%s %d\n", (*s).name, (*s).age);
	printf("%s %d\n", s->name, s->age);
}
int main(){
	struct Stu s = { "����", 19 };
	//print1(s);  //��ֵ����
	print2(&s);//��ֹ����
	system("pause");
	return 0;
}