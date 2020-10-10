#include<stdio.h>
#include<stdlib.h>
//void Leftrotateone(char str[], int size){
//	if (size == 1){
//		return;
//	}
//	char tmp = str[0];
//	for (int i = 1; i < size; i++){
//		str[i - 1] = str[i];
//	}
//	str[size - 1] = tmp;
//}
//void Leftrotaten(char str[], int size,int n){
//	for (int i = 0; i < n%size; i++){
//		Leftrotateone(str, size);
//	}
//}
//int RotateCmp(char str1[], char str2[]){
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2){
//		return 0;
//	}
//	for (int i = 0; i < len1; ++i){
//		if (strcmp(str1, str2) == 0){
//			return 1;
//		}
//		Leftrotateone(str1, len1);
//	}
//	return 0;
//}
//
//int main(){
//	char str[] = "ABCD";
//	Leftrotaten(str, 4,3);
//	printf("%s", str);
//	system("pause");
//	return 0;
//}

#define ROW 3
#define COL 3

int FindNum(int arr[ROW][COL], int to_find){
	int row = 0;
	int col = COL - 1;
	int cur = arr[row][col];
	while (row >= 0 && row < ROW&&col >= 0 && col < COL){
		if (to_find < cur){
			cur = arr[row][--col];
		}
		else if (to_find>cur){
			cur = arr[++row][col];
		}
		else{
			return 1;
		}
	}return 0;
}

//需要考虑到负数的情况
//这个代码如果进一步考虑，还可以考虑溢出的情况，一个很大的数字字符串，转成int可能超出int的表示范围
int MyAtoi(const char* str){
	int flag = 1;//辅助处理负数的情况
	int ret = 0;//int->long long
	if (str == NULL || *str == '\0'){
		return 0;
	}
	//1.处理空白字符(空格、换行、回车、制表符、垂直制表符、翻页符....)
	while (isspace(*str)){
		str++;
	}
	//2.处理+-号的情况
	if(*str == '-'){
		flag = -1;
		str++;
	}if (*str =='+'){
		str++;
	}
	//3.处理正常字符
	while (*str != '\0'){
		if (isdigit(*str)){
			//字符串转数字的核心操作
			ret = ret * 10 + (*str - '0');
		}
		str++;
	}
	return ret*flag;
	//判断ret是否超出范围
}
int main(){
	char str[] = "       +100abc";
	int result = atoi(str);
	printf("%d\n", result);
	system("pause");
	return 0;
}