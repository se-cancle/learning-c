#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	system("pause");
	return 0;
}


//void main(){
//	int i ;
//	float sum = 0;
//	float x = 0;
//    float a = 1;
//	for (i = 1; i <= 100; i++){
//		x = a /(float) i;
//		a *= -1;
//		sum += x;
//	}
//	printf("%f", sum);
//	system("pause");
//	return 0;
//}




//int main(){
//	int arr[] = { 2, 5,8,4,56,58,10,57,85,9};
//	int max=arr[0] ;
//	int i = 0;
//	for (i = 1; i < 10; i++){
//		if (max<arr[i]){
//			 max=arr[i];
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}



//int main(){
//	int max = 0x80000000;
//	int tmp = 0;
//	int i;
//	for (i = 0; i <= 10; i++){
//		scanf("%d", &tmp);
//		if (tmp > max){
//			max = tmp;
//		}
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//
//}




//int main(){
//	int i = 0; 
//	int j = 0;
//	for (i = 1; i <= 9; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}










//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = 0;
//	scanf("%d", &num);
//	int left = 0;
//	int right = 9;
//	
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (arr[mid]>num){
//			right = mid - 1;
//		}
//		else if (arr[mid] < num){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ��ˣ����������±��ǣ�%d", mid);
//			break;
//		}
//	}while (left>right){
//		printf("�Ҳ���");
//		break;
//	}
//	system("pause");
//	return 0;
//}




//void menu(){
//	printf("��ӭ����������Ϸ!\n");
//	printf("***************\n");
//	printf("1.play");
//	printf("0.exit");
//	printf("***************\n");
//}
//void game(){
//	int guess = 0;
//	int ret = rand()%100+1;
//	while (1){
//		printf("�������֣�\n");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("�´���!\n");
//		}
//		else if (guess < ret){
//			printf("��С��\n");
//		}
//		else{
//			printf("��ϲ�㣬��Ϸʤ����\n");
//			break;
//		}
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("������ѡ��:");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}






