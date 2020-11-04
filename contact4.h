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

//�����ϵ����Ϣ
void add_contact(Contact* pc);

//ɾ����ϵ����Ϣ
void del_contact(Contact* pc);

//������ϵ����Ϣ
void search_contact(Contact* pc);

//��ʾ��ϵ����Ϣ
void show_contact(Contact* pc);

//�޸���ϵ����Ϣ
void modify_contact(Contact* pc);

//���������ϵ��
void empty_contact(Contact* pc);

//������������ϵ��
void sort_byname_contact(Contact* pc);

