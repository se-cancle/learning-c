#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//����
//void LeftstrOne(char* str, int size){
//	char tmp = str[0];
//	for (int i = 0; i < size; i++){
//		str[i - 1] = str[i];
//	}
//	str[size - 1] = tmp;
//}
//void LeftstrN(char* str, int size,int n){
//	for (int i = 0; i < n; i++){
//		LeftstrOne(str, size);
//	}
//}
//int main(){
//	char str[]= "ABCD";
//	int n = 0;
//	scanf("%d", &n);
//	LeftstrN(str, 4, n);
//	printf("%s", str);
//	system("pause");
//	return 0;
//}
//void menu(){
//	printf("****************************\n");
//	printf("*******1.add    2.sub*******\n");
//	printf("*******3.mul    4.div*******\n");
//	printf("**********0.exit************\n");
//	printf("****************************\n");
//}
//int Add(int x, int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int Mul(int x, int y){
//	return x * y;
//}
//int Div(int x, int y){
//	return x / y;
//}
//
//int main(){
//	int input = 0;
//	
//	do{
//		menu();
//		printf("������ѡ��");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;	
//		 if (input == 0){
//			printf("�˳�������!\n");
//		}	
//		 else if(input == 1){
//			 printf("������Ҫ�������������");
//			 scanf("%d %d", &x, &y);
//			int ret=Add(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 2){
//			printf("������Ҫ�������������");
//			scanf("%d %d", &x, &y);
//			int ret = Sub(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 3){
//			printf("������Ҫ�������������");
//			scanf("%d %d", &x, &y);
//			int ret = Mul(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 4){
//			printf("������Ҫ�������������");
//			scanf("%d %d", &x, &y);
//			int ret = Div(x, y);
//			printf("%d\n", ret);
//		}	
//		else{
//			printf("�����������������룺\n");
//		}		
//	} while (input);
//
//	system("pause");
//	return 0;
//}


void menu(){
	printf("****************************\n");
	printf("*******1.add    2.sub*******\n");
	printf("*******3.mul    4.div*******\n");
	printf("**********0.exit************\n");
	printf("****************************\n");
}
int Add(int x, int y){
	return x + y;
}
int Sub(int x, int y){
	return x - y;
}
int Mul(int x, int y){
	return x * y;
}
int Div(int x, int y){
	return x / y;
}
int main(){
	int input =1;
	int x = 0;
	int y = 0;
	int ret = 0;
	int(*pf[])(int, int) = { 0, Add, Sub, Mul, Div };//����ָ������
   do{
		menu();
			printf("������ѡ��");
		scanf("%d", &input);
		if (input == 0){
			printf("�˳���Ϸ!");
		}
		 else if (input >= 1 && input <= 4){
				printf("������Ҫ�������������\n");
				scanf("%d %d", &x, &y);
				ret = (pf[input])(x, y);
			}
			else{
				printf("�����������������룺\n");
			}
			printf("%d\n", ret);
   } while (input);
	system("pause");
	return 0;
}

