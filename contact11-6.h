#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define DEFAULT_SZ 3
#define INC 2

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_AGE 5
#define MAX_TELE 20
#define MAX_ADDR 20

typedef struct PeoInfo{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	short age[MAX_AGE];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact{
	PeoInfo *data;//数据
	int sz;//有效个数
	int capacity;//通讯当前的容量
}Contact;

//添加联系人
void add_contact(Contact* pc);

//删除指定联系人信息
void del_contact(Contact* pc);

//查找指定联系人信息
void search_contact(Contact* pc);

//修改指定联系人信息
void modify_contact(Contact* pc);

//显示联系人信息
void show_contact(Contact* pc);

//清空联系人信息
void modify_contact(Contact* pc);

//排序联系人
void sort_contact(Contact* pc);