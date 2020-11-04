#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX  100

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_AGE 5
#define MAX_TELE 15
#define MAX_ADDR 20
typedef struct PeoInfo {
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age[MAX_AGE];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


typedef struct Contact{
	PeoInfo data[MAX];
	int sz;
}Contact;

//添加联系人信息
void add_contact(Contact* pc);

//删除联系人信息
void del_contact(Contact* pc);

//查找联系人信息
void search_contact(Contact* pc);

//显示联系人信息
void show_contact(Contact* pc);

//修改联系人信息
void modify_contact(Contact* pc);

//清空所有联系人
void empty_contact(Contact* pc);

//以名字排序联系人
void sort_byname_contact(Contact* pc);

