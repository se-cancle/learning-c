//#include<stdio.h>
//#include<stdlib.h>
//#include"assert.h"
//
////char* strcat(char* str1, const char* str2){
////	assert(str1 != NULL&&str2 != NULL);
////	int cur = 0;
////	while (str1[cur] != '\0'){
////		cur++;
////	}
////	int i = 0;
////	while (str2 [i]!= '\0'){
////		str1[cur + i] = str2[i];
////		i++;
////	}
////	return str1;
////}
//char* strcat(char* str1, const char* str2){
//	assert(str1 != NULL&&str2 != NULL);
//		int cur = 0;
//		while (str1[cur] != '\0'){
//			cur++;
//		}
//		int i = 0;
//		while (str2[i] != '\0'){
//			str1[cur + i] = str2[i];
//			i++;
//		}
//		return str1;
//	}
//int main(){
//	char str1[100] = "hehe";
//	char str2[10] = "haha";
//	strcat(str1, str2);
//	//×Ö·û´®Æ´½Ó
//	printf("%s", str1);
//
//	system("pause");
//	return 0;
//}