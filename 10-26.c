#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"assert.h"

int main(){
	char arr1[] = "this.a.simple.string";
	char tmp[30] = { 0 };
	strcmp(tmp, arr1);
	char arr2[] = ".";
	char* p = NULL;
	for (p = strtok(tmp, arr2); p != NULL; p = strtok(NULL, arr2)){
		printf("%s\n",p);
	}
	system("pause");
	return 0;
}

//int main(){
//	char arr[] = "abcdefabcdef";
//	char* ret = strstr(arr, "cd");
//	if (ret != NULL){
//		printf("%s\n", ret);
//	}
//	system("pause");
//	return 0;
//}

//
//int main(){
//	char arr1[] = "abcdef";
//	char arr2[] = "abceef";
//	int ret = strncmp(arr1, arr2, 5);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//int main(){
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	if (strlen(arr1) != strlen(arr2)){
//		printf("NO");
//		return 0;
//	}
//	strncat(arr1, arr1, 6);
//	char* ret=strstr(arr1, arr2);
//	if (ret == NULL){
//		printf("NO");
//	}
//	else{
//		printf("YES");
//	}
//	system("pause");
//	return 0;
//}

//判断一个字符串是不是另外一个字符串旋转得来的

//move_arr(char* arr1,int n){
//	int i = 0;
//	int len = strlen(arr1);
//	for(int j=0;j<n;j++){
//		int tmp = arr1[0];
//		for (i = 0; i < len-1; i++){
//			arr1[i] = arr1[i + 1];
//		}
//		arr1[len - 1] = tmp;
//	}	
//}
//
//int main(){
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++){
//		move_arr(arr1, 1);
//		if (strcmp(arr1, arr2) == 0){
//			printf("YES\n");
//			break;
//		}
//	}if (i == len){
//		printf("NO\n");
//	}
//
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}


//int main(){
//	char arr1[20] = "abcef";
//	char arr2[] = "hello world";
//	strncat(arr1, arr2, 9);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//int main(){
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 9);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//char* my_strcat(char* dest, const char* src){
//	assert(dest != NULL&&src != NULL);
//		char* ret = dest;
//
//	//1.找目的地空间的'\0'
//	while (*dest ){
//		dest++;
//	}
//	//2.拷贝数据
//	while (*dest++ = *src++){
//		;
//	}return ret;
//}

//导入静态库
//#pragma comment(lib,"my_strcat.lib")
//int main(){
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "world");
//	printf("%s\n", arr1);
//	/*printf("%s\n", my_strcat(arr1, "world"));*/
//	system("pause");
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src){
//	assert(dest != NULL&&src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++){
//
//		;
//	}return ret;
//
//	/*while (src != '\0'){
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;*/
//}
//int main(){
//	char* str1 = "abcdef";
//	char arr[20] = "XXXXXXXXXXXXXXXXXXX";
//	//my_strcpy(arr,str1);
//	printf("%s\n", my_strcpy(arr,str1));
//
//	system("pause");
//	return 0;
//}

//int my_strcmp(const char* s1,const char* s2)
//{
//	assert(s1);
//	assert(s2);
//	while (*s1 == *s2){
//		if (*s1 == *s2)
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//	//if (*s1 > *s2){
//	//	return 1;
//	//}
//	//else {
//	//	return -1;
//	//}
//
//}
//
//int main(){
//	//-1 0 1
//	int ret =my_strcmp("abcdef", "abc");
//	//printf("%d\n", ret);
//	if (ret < 0){
//		printf("小于\n");
//	}
//	else if (ret == 0){
//		printf("等于\n");
//	}
//	else if (ret>0){
//		printf("大于\n");
//	}
//	system("pause");
//	return 0;
//}