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
//	//colloc������ڴ�ռ�ͬ����Ҫʹ��free���ͷţ�������ͷţ�ͬ�����ڴ�й©
//	//calloc�����ڴ�ʧ�ܣ�Ҳ�Ƿ���NULL
//	//calloc��malloc������������calloc���뵽���ڴ�ռ䱻��ʼ����ȫ0��
//	system("pause");
//	return 0;
//}

//int main(){
//	int size = 0;
//	printf("�����������Ԫ�ظ���: ");
//	scanf("%d", &size);
//
//	//int num[size]={0};
//	//malloc�����ĵ�λ���ֽ�
//
//	int* num = (int*)malloc(size* sizeof(int));
//	//numָ��һ������λ16���ֽڵ������ռ���ڴ���
//	//������ڴ浱����һ��4��Ԫ�ص���������
//	for (int i = 0; i < 4; i++){
//		num[i] = 0;
//	}
//	for (int i = 0; i < 4; i++){
//		printf("%d ", num[i]);
//	}
//	if (num == NULL){
//		printf("�ڴ�����ʧ��!\n");
//	}
//	//malloc������ڴ����Ҫ�ͷţ�����ͻ�����ڴ�й©�����
//	system("pause");
//	return 0;
//}