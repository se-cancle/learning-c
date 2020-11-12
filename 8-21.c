#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(){
//关机程序，程序运行起来，会提示1分钟内关机，如果输入我是猪，就取消关机
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("电脑将在一分钟内关机，如果输入我是猪，就取消关机！\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0){
		system("shutdown -a");
	}
	else{
		goto again;
	}

	system("pause");
	return 0;
}










////猜数字游戏
//void menu(){
//	printf("欢迎参加猜数字游戏！\n");
//	printf("*******************\n");
//	printf("1.play");
//	printf("0.exit");
//	printf("*******************\n");
//}
//void game(){
//	int guess = 0;
//	//1生成随机数1-100,rand
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2猜数字
//	while (1){
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("猜大了\n");
//		}else if (guess < ret){
//			printf("猜小了\n");
//		}else 
//		{
//			printf("恭喜你，游戏胜利\n");
//			break;
//		}
//	}
//}
//int main(){
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			//游戏的逻辑
//			game();//猜数字游戏的代码
//			break;
//		case 0:
//			printf("推出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
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
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0){
//			printf("密码正确\n");
//			break;
//		}
//		else{
//			printf("密码错误，请重新输入\n");
//		}	
//	}
//	if (i == 3){
//		printf("密码错误\n");
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
//		system("cls");//cls清空屏幕
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
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right){
//		printf("找不到");
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
//			printf("找到了 %d", i);
//			break;
//		}
//	}
//	if (i == 10){
//		printf("找不到");
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


//n阶乘
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