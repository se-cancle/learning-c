#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//char arr[] = { 1, 2, 3, 4 };
	/*printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(*(arr+0)));
	printf("%d\n", sizeof(arr + 1));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(*&arr));
	printf("%d\n", sizeof(&*arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));*/

	////strlen�����ַ����ĳ��ȣ�һ����\0���ַ�����Ž��ַ���
	//printf("%d\n", strlen(arr));//δ������Ϊ
	//printf("%d\n", strlen(arr+0));//δ������Ϊ
	//printf("%d\n", strlen(*arr));//ԭ����Ӧ�ñ���ʧ�ܣ���C���Զ����ͼ��û��ô�ϸ�
	////�͵��°�char��ʽת����char*,�������ǵõ���һ���Ƿ���ָ�룬�����õ�ʱ��ͻ����δ������Ϊ
	//printf("%d\n", strlen(arr[1]));//ͬ��
	//printf("%d\n", strlen(&arr));//char(*)[6];
	////&arr���ͺ�char*��һ�£������ʽ����ת����ȥ�Ļ���
	////�ͻ�õ�һ��ָ��'a'ָ�룬�����ָ�뿪ʼ������\0��Ȼ�Ҳ�����δ������Ϊ
	//printf("%d\n", strlen(&arr + 1));//ͬ��
	//printf("%d\n", strlen(&arr[0] + 1));//�õ�һ��ָ��b��ָ�룬����δ������Ϊ

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));// 7 ��\0
	//printf("%d\n", sizeof(arr + 0));// 4 arr+0�õ�һ��char*
	//printf("%d\n", sizeof(*arr));//1 *arr�õ���һ���ַ�
	//printf("%d\n", sizeof(arr[1]));//1 ͬ��
	//printf("%d\n", sizeof(&arr));//4 &arr�õ�һ��ָ��
	//printf("%d\n", sizeof(&arr));//4 ͬ��
	//printf("%d\n", sizeof(&arr[0] + 1));//4 �õ�һ��char*

	//printf("%d\n", strlen(arr));//6 ���ַ������ȣ�����\0
	//printf("%d\n", strlen(arr+0));//6  �õ��Ļ���һ��ָ��a��ָ��
	//printf("%d\n", strlen(*arr));//δ������Ϊ��*arr�õ������ַ�a
	//printf("%d\n", strlen(arr[1]));//ͬ��
	//printf("%d\n", strlen(&arr));// 6 &arr��һ������ָ�룬�����ĵ�ַǡ�þ�����Ԫ�صĵ�ַ
	//printf("%d\n", strlen(&arr + 1));//δ������Ϊ��&arr��һ������ָ�룬+1�������������飬��ʱ���ʵ��Ѿ��ǷǷ��ڴ���
	//printf("d\n", strlen(&arr[0] + 1));//5 &arr[0]+1�ﵽָ��b��ָ�룬��b��ʼ�ҵ�\0

	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1 *p��һ��char����
	printf("%d\n", sizeof(p[1]));//1 p[1]��һ��char
	printf("%d\n", sizeof(&p));//4 char**
	printf("%d\n", sizeof(&p + 1));// 4 char**
	printf("%d\n", sizeof(&p[0] + 1));//4 char*ָ��b

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p+1));//5
	printf("%d\n", strlen(*p));//δ������Ϊ
	printf("%d\n", strlen(p[1]));//δ������Ϊ
	printf("%d\n", strlen(&p));//δ������Ϊ &p�õ�char**
	printf("%d\n", strlen(&p+1));//δ������Ϊ
	printf("%d\n", strlen(&p[0]+1));//5

	system("pause");
	return 0;
}