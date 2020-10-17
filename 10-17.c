#include<stdio.h>
#include<stdlib.h>
#include<string.h>



//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//void qsort(void* base, int sz, int width, int(*cmp)());


//练习使用库函数，qsort排序各种类型的数据

void swap(const void* e1, const void* e2,int width){
	int i = 0;
	for (i = 0; i <width ; i++){
		char tmp = *((char*)e1 + i);
		*((char*)e1 + i) = *((char*)e2 + i);
		*((char*)e2 + i) = tmp;
	}
}
void bubble(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2)){
	int i = 0;
	for (i = 0; i < sz; i++){
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++){
			if ((cmp((char*)base + width*j, (char*)base + width*(j+1))>0)){
				swap((char*)base + width*j, (char*)base + width*(j + 1), width);
			}		
		}
	}
	
}
//整数类型
//int cmp(const void* e1,const void* e2){
//	return (*(int*)e1 - *(int*)e2);
//}
//void print(int arr[], int sz){
//	for (int i = 0; i < sz; i++){
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void test1(){
//	int arr[] = { 1, 3, 5, 6, 7, 4, 2, 9, 8, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz, sizeof(arr[0]), cmp);
//	print(arr, sz);
//}

//结构体
 typedef struct Stu{
	char name[100];
	int age;
}s;
 int cmp_name(const void* e1, const void* e2){
	 return strcmp(((s*)e1)->name, ((s*)e2)->name);
 }
 /*int cmp_age(const void* e1, const void* e2){
	 return (((s*)e1)->age-((s*)e2)->age);
 }*/
 void print(s arr[], int sz) {
	
	 for (int i = 0; i < sz; i++)	{
		 printf("学生信息: 姓名：%s 年龄：%d\n",  arr[i].name, arr[i].age);

	 }
 }
void test2(){
	s arr[] = { { "zhangsan", 23 }, { "lisi", 21 }, { "wangwu", 29 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble(arr, sz, sizeof(arr[0]), cmp_age);
	bubble(arr, sz, sizeof(arr[0]), cmp_name);
	print(arr, sz);
}  
int main(){
	//test1();
	test2();
	system("pause");
	return 0;
}








