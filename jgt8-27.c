#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct S{
	int date[1000];
	int num;
};
struct S s = { { 1, 2, 3, 4 }, 1000 };
void print1(struct S s){
	printf("%d\n", s.num);
}
void print2(struct s* ps){
	printf("%d\n", ps->num);
}
int main(){
	print1(s);//���ṹ��
	print2(&s);//����ַ

	system("pause");
	return 0;
}