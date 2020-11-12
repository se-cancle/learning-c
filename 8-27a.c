#include<stdio.h>
#include<stdlib.h>
#include<string.h>
enum Sex{
	MALE,
	FEMALE,
};
struct Student{
	//结构体的成员/字段/属性
	char name[10];
	int age;
	int score;
	enum Sex sex;
};
//#define Student struct student 不太推荐
typedef struct Student Student;
int main(){
	//struct Student 是一个整体，构成了自定制的一种类型
	//s的类型就叫struct Student ，而不是Student
	Student s = { "zhangsan", 18, 100, MALE };
	//成员访问操作符，访问到结构体中的成员
	
	printf("%s\n", s.name);
	s.age = 30;
	printf("%s\n", s.age);





	//char* p = "abcdef";
	//printf("%d\n", sizeof(p[1]));
	//char  arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr+0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof(*(arr + 0)));
	//printf("%d\n", sizeof(arr + 1));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(*&arr));
	//printf("%d\n", sizeof(&*arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	system("pause");
	return 0;
}