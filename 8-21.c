#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(){
//�ػ����򣬳�����������������ʾ1�����ڹػ������������������ȡ���ػ�
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("���Խ���һ�����ڹػ������������������ȡ���ػ���\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "������") == 0){
		system("shutdown -a");
	}
	else{
		goto again;
	}

	system("pause");
	return 0;
}










////��������Ϸ
//void menu(){
//	printf("��ӭ�μӲ�������Ϸ��\n");
//	printf("*******************\n");
//	printf("1.play");
//	printf("0.exit");
//	printf("*******************\n");
//}
//void game(){
//	int guess = 0;
//	//1���������1-100,rand
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2������
//	while (1){
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("�´���\n");
//		}else if (guess < ret){
//			printf("��С��\n");
//		}else 
//		{
//			printf("��ϲ�㣬��Ϸʤ��\n");
//			break;
//		}
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			//��Ϸ���߼�
//			game();//��������Ϸ�Ĵ���
//			break;
//		case 0:
//			printf("�Ƴ���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	system("pause");
//	return 0;
//}






//int main(){
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++){
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("������ȷ\n");
//			break;
//		}
//		else{
//			printf("�����������������\n");
//		}	
//	}
//	if (i == 3){
//		printf("�������\n");
//	}
//	system("pause");
//	return 0;
//}


//int main(){
//	char arr1[] = "welcome to bit!";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right){
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//cls�����Ļ
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}



//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 7;
//	int left = 0;
//	int right = 9;
//	while (left <= right){
//		int mid = (right + left) / 2;
//		if (arr[mid] < n){
//			left = mid + 1;
//		}
//		else if (arr[mid]>n){
//			right = mid - 1;
//		}
//		else{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("�Ҳ���");
//	}
//	system("pause");
//	return 0;
//}



//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 7;
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		if (arr[i] == n){
//			printf("�ҵ��� %d", i);
//			break;
//		}
//	}
//	if (i == 10){
//		printf("�Ҳ���");
//	}
//	system("pause");
//	return 0;
//}


//int main(){
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++){
//			ret *= i;
//			sum += ret;
//		}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}


//n�׳�
//int main(){
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++){
//		ret *= i;
//	}
//		printf("%d", ret);
//	system("pause");
//	return 0;
//}