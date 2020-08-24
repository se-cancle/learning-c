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

	////strlen是求字符串的长度，一个带\0的字符数组才叫字符串
	//printf("%d\n", strlen(arr));//未定义行为
	//printf("%d\n", strlen(arr+0));//未定义行为
	//printf("%d\n", strlen(*arr));//原则上应该编译失败，但C语言对类型检查没那么严格，
	////就导致把char隐式转成了char*,这样还是得到了一个非法的指针，解引用的时候就会出现未定义行为
	//printf("%d\n", strlen(arr[1]));//同上
	//printf("%d\n", strlen(&arr));//char(*)[6];
	////&arr类型和char*不一致，如果隐式类型转换过去的话，
	////就会得到一个指向'a'指针，从这个指针开始往后找\0仍然找不到，未定义行为
	//printf("%d\n", strlen(&arr + 1));//同上
	//printf("%d\n", strlen(&arr[0] + 1));//得到一个指向b的指针，仍是未定义行为

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));// 7 带\0
	//printf("%d\n", sizeof(arr + 0));// 4 arr+0得到一个char*
	//printf("%d\n", sizeof(*arr));//1 *arr得到了一个字符
	//printf("%d\n", sizeof(arr[1]));//1 同上
	//printf("%d\n", sizeof(&arr));//4 &arr得到一个指针
	//printf("%d\n", sizeof(&arr));//4 同上
	//printf("%d\n", sizeof(&arr[0] + 1));//4 得到一个char*

	//printf("%d\n", strlen(arr));//6 求字符串长度，不算\0
	//printf("%d\n", strlen(arr+0));//6  得到的还是一个指向a的指针
	//printf("%d\n", strlen(*arr));//未定义行为，*arr得到的是字符a
	//printf("%d\n", strlen(arr[1]));//同上
	//printf("%d\n", strlen(&arr));// 6 &arr是一个数组指针，里面存的地址恰好就是首元素的地址
	//printf("%d\n", strlen(&arr + 1));//未定义行为，&arr是一个数组指针，+1跳过了整个数组，此时访问的已经是非法内存了
	//printf("d\n", strlen(&arr[0] + 1));//5 &arr[0]+1达到指向b的指针，从b开始找到\0

	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1 *p是一个char类型
	printf("%d\n", sizeof(p[1]));//1 p[1]是一个char
	printf("%d\n", sizeof(&p));//4 char**
	printf("%d\n", sizeof(&p + 1));// 4 char**
	printf("%d\n", sizeof(&p[0] + 1));//4 char*指向b

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p+1));//5
	printf("%d\n", strlen(*p));//未定义行为
	printf("%d\n", strlen(p[1]));//未定义行为
	printf("%d\n", strlen(&p));//未定义行为 &p得到char**
	printf("%d\n", strlen(&p+1));//未定义行为
	printf("%d\n", strlen(&p[0]+1));//5

	system("pause");
	return 0;
}