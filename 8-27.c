#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum Sex{
	MALE,
	FEMALE,
};

struct Student {
	char name[1024];
	int age;
	int score;
	enum Sex sex;
};
//#define Student struct Student��̫�Ƽ�
typedef struct Student Student;

int main(){
	//struct Student ��һ�����壬�������Զ��Ƶ�һ������
	//s�����;ͽ���struct Student,������Student
	Student s = { "zhangsan", 18, 100, MALE };
	/*s.name[0] = 'l';
	s.name[1] = 'i';
	s.name[2] = 's';
	s.name[3] = 'i';
	s.name[4] = '\0';*/
	strcpy(s.name, "����");
	printf("%s\n", s.name);
	//printf("%s\n", s.age);


	system("pause");
	return 0;
}