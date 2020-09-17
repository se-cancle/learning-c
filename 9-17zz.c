#include<stdio.h>
#include<stdlib.h>
#include<string.h>





//ÄæÐò×Ö·û´®

void reverse(char* str, int len){
	int left = 0;
	int right = len - 1;
	while (left <= right){
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
	return str;
}
int main(){
	char str[] = "abcdef";
	int len = strlen(str);
	reverse(str, len);
	printf("%s", str);
	system("pause");
	return 0;
}

//void reverse(char* str, int len)
//{
//	int left = 0;
//	int right = len-1;
//	//for (; left < right;){
//	while(left <= right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}	
//		printf("%s", str);
//}
////Print() {
////	for (int i = 0; i < size; i++) {
////		printf("%c ", str[i]);
////	}
////}
//
//int main(){
//	char str[] = "abcdef";
//	//char* p = str;
//	int len = strlen(str);
//     reverse(str,len);
//	//printf("%s", p);
//	//printf("%s", ret);
//
//	system("pause");
//	return 0;
//}




//´òÓ¡Êý×é
//int print(int* p, int size){
//	for (int i = 0; i < size; i++){
//		printf("%d ", *(p + i));
//	}
//}
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int ret=print(p, size);
//	system("pause");
//	return 0;
//}