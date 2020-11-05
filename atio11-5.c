#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"assert.h"

int my_atoi(char* str){
	assert(str != NULL);
	int flag = 1;//出现符号的情况
	int ret = 0;//最终返回值
	//出现空白字符的情况
	while (isspace(*str)){
		str++;
	}
	//出现'+','-'号的情况
	if (*str == '-'){
		flag = -1;
		str++;
	}
	if (*str == '+'){
		str++;
	}
	//正常字符
	while (*str != '\0'){
		if (isdigit(*str)){
			ret = ret * 10 + (*str - '0');
		}
		else{
			return ret;
		}
		str++;
	}
	return flag*ret;	
}
int main(){
	char str[] = "  -100";
	int ret=my_atoi(str);
	printf("%d\n", ret);
	system("pause");
	return 0;
}