#include<stdio.h>
#include<stdlib.h>
#include<string.h>
enum Sex{
	MALE,
	FEMALE,
};
struct Student{
	//�ṹ��ĳ�Ա/�ֶ�/����
	char name[10];
	int age;
	int score;
	enum Sex sex;
};
//#define Student struct student ��̫�Ƽ�
typedef struct Student Student;
int main(){
	//struct Student ��һ�����壬�������Զ��Ƶ�һ������
	//s�����;ͽ�struct Student ��������Student
	Student s = { "zhangsan", 18, 100, MALE };
	//��Ա���ʲ����������ʵ��ṹ���еĳ�Ա
	
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