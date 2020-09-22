#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(){
	const int num = 10;
	num = 20;
	/*int *p = &num;
	*p = 20;*/
	printf("%d\n", num);

	system("pause");
	return 0;
}


//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (j = 1; j <= n; j++){
//		ret = 1;
//		for (i = 1; i <= n; i++){
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}
//void Func(){
//	int* p = (int*)malloc(sizeof(int*) * 10);
//	p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL){
//		return;
//	}
//	
//	do_something;
//	free(p);
//}
//void GetMemory(char* p){
//	p = (char*)malloc(100);
//}
//void Test(void){
//	char* srtr = NULL;
//	GetMemory(str);
//	strcpy(str, "hello ")
//}
//int main(){
//
//	int* ptr = (int*)malloc(10 * sizeof(int));
//	int* ptr2 = (int*)colloc(10, sizeof(int));
//	//colloc申请的内存空间同样需要使用free来释放，如果不释放，同样是内存泄漏
//	//calloc申请内存失败，也是返回NULL
//	//calloc和malloc最大的区别在于calloc申请到的内存空间被初始化成全0了
//	system("pause");
//	return 0;
//}

//int main(){
//	int size = 0;
//	printf("请输入数组的元素个数: ");
//	scanf("%d", &size);
//
//	//int num[size]={0};
//	//malloc参数的单位是字节
//
//	int* num = (int*)malloc(size* sizeof(int));
//	//num指向一个长度位16个字节的连续空间的内存了
//	//把这个内存当成是一个4个元素的整形数组
//	for (int i = 0; i < 4; i++){
//		num[i] = 0;
//	}
//	for (int i = 0; i < 4; i++){
//		printf("%d ", num[i]);
//	}
//	if (num == NULL){
//		printf("内存申请失败!\n");
//	}
//	//malloc申请的内存必须要释放，否则就会出现内存泄漏的情况
//	system("pause");
//	return 0;
//}