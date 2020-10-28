#include<stdio.h>
#include<stdlib.h>


//√∞≈›≈≈–Ú
//void bubblesort(int* arr, int sz){
//	for (int i = 0; i < sz-1; i++){
//		for (int j = 0; j < sz - i-1; j++){
//			if (arr[j] > arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main(){
//		int arr[] = { 1, 2, 4, 6, 3, 9, 8, 7, 5, 0 };
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		bubblesort(arr, sz);
//		int i = 0;
//		for (i = 0; i < sz; i++){
//			printf("%d ", arr[i]);
//		}
//		system("pause");
//		return 0;
//	}


int cmp(const void* p1,const void* p2){
	return (*(int*)p1 - *(int*)p2);

}
void swap(void* p1, void* p2,int count){
	for (int i = 0; i < count; i++){
	   char  tmp =*((char*)p1 + i);
		*((char*)p1 + i)= *((char*)p2 +i);
		*((char*)p2 + i) = tmp;
	}
}

void bubblesort(void* arr, int sz ,int count, int * int_cmp){
	for (int i = 0; i < sz - 1; i++){
		for (int j = 0; j < sz - i - 1; j++){
			if (cmp((char*)arr + j*count, (char*)arr + (j + 1)*count) < 0){
				swap((char*)arr + j*count, (char*)arr + (j + 1)*count, count);
			}
		}
	}
}
//void test1(){
//	int arr[] = { 1, 2, 4, 6, 3, 9, 8, 7, 5, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, sz, sizeof(int), cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
typedef struct stu{
	char name[100];
	int age;
}s;
int cmp_name(const void* e1, const void* e2){
	return strcmp(((s*)e1)->name, ((s*)e2)->name);
}
void test2(){
	s arr[] = { { "zhangsan", 20 }, { "lisi", 24 }, { "wangwu", 23 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz, sizeof(arr[0]), cmp_name);
}
int main(){
	test1();
	test2();
	system("pause");
	return 0;
}

//qsort ÷¥––øÏÀŸ≈≈–Ú
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );

