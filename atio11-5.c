#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"assert.h"

int my_atoi(char* str){
	assert(str != NULL);
	int flag = 1;//���ַ��ŵ����
	int ret = 0;//���շ���ֵ
	//���ֿհ��ַ������
	while (isspace(*str)){
		str++;
	}
	//����'+','-'�ŵ����
	if (*str == '-'){
		flag = -1;
		str++;
	}
	if (*str == '+'){
		str++;
	}
	//�����ַ�
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