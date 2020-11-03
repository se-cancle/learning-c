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
	PeoInfo data[MAX];//����
	int sz;//��Ч����
}Contact;
//����
void add_contact(Contact* pc);

//��ʾ
void show_contact(Contact* pc);

//ɾ��
void del_contact(Contact* pc);
//����
void search_contact(Contact* pc);

//�޸�
void modify_contact(Contact* pc);

//���
void  destroy_contact(Contact* pc);

//����
void sort_contact(Contact* pc);
