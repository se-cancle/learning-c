#include<stdio.h>
#include<stdlib.h>

//·Çµİ¹é
int strlen(char arr[]){
	int i = 0;
	while (arr[i] != '\0'){
		i++;
	}
	return i;
}
//µİ¹é
int strlen(char arr[]){
	if (arr[0] != '\0'){
		return 1 + strlen(arr + 1);
	}
}
int main(){
	char arr[] = "abcdef";
	int len = strlen(arr);
	printf("%d\n", len);
	system("pause");
	return 0;
}