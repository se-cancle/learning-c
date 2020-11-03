#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_AGE 5
#define MAX_TELE 12
#define MAX_ADDER 100

typedef struct PeoInfo{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age[MAX_AGE];
	char tele[MAX_TELE];
	char addr[MAX_ADDER];
}PeoInfo;

typedef struct Contact{
	PeoInfo data[MAX];//数据
	int sz;//有效个数
}Contact;
//增添
void add_contact(Contact* pc);

//显示
void show_contact(Contact* pc);

//删除
void del_contact(Contact* pc);
//查找
void search_contact(Contact* pc);

//修改
void modify_contact(Contact* pc);

//清空
void  destroy_contact(Contact* pc);

//排序
void sort_contact(Contact* pc);
