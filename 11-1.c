#include<stdio.h>
#include<stdlib.h>

//int check_sys(){
//	int a = 1;//[01 00 00 00]
//	return *(char*)&a;
//}


int check_sys(){
	union Un{
		int i;
		char c;
	}u;
	u.i = 1;
	//����0����ʾ���
	//����1����ʾС��
	return u.c;
}
int main(){
	int ret = check_sys();
	if (ret == 1){
		printf("С��\n");
	}
	else{
		printf("���\n");
	}


	system("pause");
	return 0;
}