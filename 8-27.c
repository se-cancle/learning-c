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
//#define Student struct Student不太推荐
typedef struct Student Student;

int main(){
	//struct Student 是一个整体，构成了自定制的一种类型
	//s的类型就叫做struct Student,而不是Student
	Student s = { "zhangsan", 18, 100, MALE };
	/*s.name[0] = 'l';
	s.name[1] = 'i';
	s.name[2] = 's';
	s.name[3] = 'i';
	s.name[4] = '\0';*/
	strcpy(s.name, "李四");
	printf("%s\n", s.name);
	//printf("%s\n", s.age);


	system("pause");
	return 0;
}