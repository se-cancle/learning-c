#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Strcmp(const char* str1,const char* str2){
	//assert(str1 != NULL&&str2 != NULL);
	while (*str1 != '\0'&&*str2 != '\0'){
		if (*str1 < *str2){
			return -1;
		}
		else if (*str1>*str2){
			return 1;
		}
		else{
			str1++;
			str2++;
		}
	}
	if (*str1 < *str2){
		return -1;
	}
	else if (*str1>*str2){
		return 1;
	}
	else{
		return 0;
	}

}
int main(){
	char str1[] = "haha";
	char str2[] = "haha";
	int ret = Strcmp(str1, str2);
	if (ret< 0){
		printf("str1<str2\n");
	}
	else if (ret > 0){
		printf("str1>str2\n");
	}
	else{
		printf("str1==str2\n");
	}
	//printf("%d\n", ret);
	system("pause");
	return 0;
}