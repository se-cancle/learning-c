#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//方法1
void Movestr(char str[], int n){
	int len = strlen(str);
	for (int i = 0; i < n; i++){
		char tmp = str[0];
		for (int j = 1; j < len-1; j++){
			str[j - 1] = str[j];
		}
		str[len - 1] = tmp;
		}
}
//方法2
//void reverse(char* left, char* right){
//	while (left < right){
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void Leftstr(char str[], int n){
//	int len = strlen(str);
//	reverse(str, str + n - 1);
//	reverse(str + n, str + len - 1);
//	reverse(str, str + len - 1);
//}
int Cmpstr(char str[], char str1[]){
	int len = strlen(str);
	int len1 = strlen(str1);
	if (len != len1){
		return 0;
	}
	for (int i = 0; i < len; i++){
		if (strcmp(str, str1) == 0){
			return 1;
		}
		else{
			Movestr(str, len);
		}
	}
}
int main(){
	char str[] = "AABCDE";
	char str1[] = "ABCADE";
	int len = strlen(str);
	int n = 0;
	scanf("%d", &n);
	Movestr(str,n);

	//Leftstr(str, n);

	printf("%s\n", str);
	int ret = Cmpstr(str, str1);
	printf("%d\n", ret);
	system("pause");
	return 0;
}