
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){
	signed char a = -10;
	printf("%d", a);
	system("pause");
	return 0;
}
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

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

//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

//int main(){
//	char muder = 'A';
//	for (muder = 'A'; muder <= 'D'; muder++){
//		if ((muder != 'A') + (muder == 'C') + (muder == 'D') + (muder != 'D') == 3){
//			printf("凶手是%c\n", muder);
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
//		printf("小端字节序\n");
//	}
//	else{
//		printf("大端字节序\n");
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