
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){
	signed char a = -10;
	printf("%d", a);
	system("pause");
	return 0;
}
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//int main(){
//	int a, b, c, d, e;
//	for (a = 0; a <= 5; a++){
//		for (b = 0; b <= 5; b++){
//			for (c = 0; c <= 5; c++){
//				for (d = 0; d <= 5; d++){
//					for (e = 0; e <= 5; e++){
//						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1){
//							if (a*b*c*d*e == 120){
//								printf("a=%d,b=%d,c=%d,d=%d.e=%d", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//int main(){
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	for (i = 0; i <n; i++){
//		for (j = 0; j <= i; j++){
//			if (j == 0 || i == j){
//				arr[i][j] = 1;
//			}
//			else{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}printf("%d ", arr[i][j]);
//			
//		}printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

//int main(){
//	char muder = 'A';
//	for (muder = 'A'; muder <= 'D'; muder++){
//		if ((muder != 'A') + (muder == 'C') + (muder == 'D') + (muder != 'D') == 3){
//			printf("������%c\n", muder);
//		}
//	}
//	system("pause");
//	return 0;
//}

//void Print_Yanghui(){
//	int i = 0;
//	int j = 0;
//	int arr[100][100] = { 0 };
//	for (i = 0; i < 10; i++){
//		arr[i][0] = 1;
//	}
//	for (i = 0; i < 10; i++){
//		for (j = 0; j < i; j++){		
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];	
//		}
//	}
//	for (i = 0; i < 10; i++){
//		for (j = 0; j < i; j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main(){	
//	//scanf("%d,%d", &i, &j);	
//	Print_Yanghui();
//	system("pause");
//	return 0;
//}
//int main()
//{
//	/*unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);*/
//	unsigned int a=- 1;
//	printf("%d", a);
//	system("pause");
//	return 0;
//}

//int main(){
//	int a = 1;
//	//int* p = &a;
//	//char* p2 = (char*) p;
//	//if (*p2 == 0x01){
//	char* p = (char*)&a;
//	if (*p==1){
//		printf("С���ֽ���\n");
//	}
//	else{
//		printf("����ֽ���\n");
//	}
//	system("pause");
//	return 0;
//}


//int main(){
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%p\n", &i);
//
//	for (i = 0; i < 10; i++){
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	/*for (i = 0; i <= 12; i++){
//		arr[i] = 0;
//		printf("hehe\n");
//	}*/
//	system("pause");
//	return 0;
//}