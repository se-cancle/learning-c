#include<stdio.h>
#include<stdlib.h>


int main(){
	int arr[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(arr));//16
	//printf("%d\n", sizeof(arr + 0));//   4 arr ��ʽת��ָ��int*
	printf("%d\n", sizeof(*arr));//4    ��ʽת��ָ��int* ���ٽ����ã��õ�int

	system("pause");
	return 0;
}

//typedef int(*Cmp)(int, int);
////ð������
////IsAscΪ1����Ϊ0����
////cmp�������������������������Ļ��������һ������С�ڵڶ����������ͷ���1�����򷵻�0
//void bubble(int arr[], int size, Cmp cmp){
//	int bound = 0;
//	for (; bound < size; bound++){
//		int cur = size - 1;
//		for (; cur>bound; cur--){
//			//if (IsAsc == 1){
//				if (cmp(arr[cur - 1] ,arr[cur])==0){
//					int tmp = arr[cur - 1];
//					arr[cur - 1] = arr[cur];
//					arr[cur] = tmp;
//				//}
//			}
//			/*else if (IsAsc == 0){
//				if (arr[cur - 1] < arr[cur]){
//					int tmp = arr[cur - 1];
//					arr[cur - 1] = arr[cur];
//					arr[cur] = tmp;
//				}
//
//			}*/
//		}
//	}
//}
//int Less(int x, int y){
//	return x < y ? 1 : 0;
//}
//	int main(){
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int IsAsc = 0;
//	bubble(arr, sz, Less);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}printf("\n");
//
//	system("pause");
//	return 0;
//}

//int int_cmp(const void * p1, const void * p2){
//	return (*(int*)p1 - *(int*)p2);
//}
//
//int main(){
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//
//	qsort(arr, sizeof(arr) / sizeof(arr)[0], sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//void test(const char* str){
//	printf("%s\n", str);
//}
//int main(){
//	void(*pfun)(const char*) = test;
//	void(*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//	void(*(*ppfunArr[10])(const char*)) = &pfunArr;
//	return 0;
//	system("pause");
//
//}




