#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
////��-������һ���ṹ������
//struct Book{
//	char name[20];//����
//	int price;//����
//}b4,b5,b6;//ȫ�ֱ���

//typedef struct Book{
//	char name[20];//����
//	int price;//����
//}Book;
//
//int main(){
//	//���ýṹ�����ʹ����ṹ�����-�ֲ�����
//	struct Book b1;//������һ����
//	struct Book b2;
//	struct Book b3;
//	Book b4;
//	Book b5;
//	//�ַ�����������"c����"������name������
//	strcpy(b.name ,"c����");
//		b.price = 55;
//		printf("%s\n", b.name);
//		printf("%d\n", b.price);
//
//	return 0;
//}
//
//struct B{
//	int a;
//	char c;
//};
//struct S{
//	int a;//����
//	char arr[20];//����
//	int* p;//ָ��
//	struct B sb;//�ṹ��
//};
//
//int main(){
//	int a = 0;
//	struct B b = { 20, 'w' };
//	struct S s = { 100, "hehe", NULL, { 33, 'q' } };
//	printf("%d %s %d %c\n", s.a, s.arr, s.sb.a, s.sb.c);
//	return 0;
//}
struct Stu{
	char name[20];
	int age;
};
void print1(struct Stu stu){
	printf("%s %d\n", stu.name, stu.age);
}
void print2(struct Stu* ps){
	printf("%s %d\n", (*ps).name, (*ps).age);
	printf("%s %d\n", ps->name, ps->age);
}
int main(){
	struct Stu s = { "����", 20 };
	print1(s);
	print2(&s);
	return 0;
}