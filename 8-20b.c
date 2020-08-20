#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 1;
	do{
		if (i == 5)
			//break;
			continue;
		printf("%d ", i);
		i++;
	} 
	while (i < 10);

	system("pause");
	return 0;
}

//int main(){
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		//k=0,0为假，一次都不循环
//		k++;
//	system("pause");
//	return 0;
//}
//int main(){
//	//情况1：打印100个hehe
//	/*int i = 0;
//	int j = 0;
//	int count = 1;
//	for (i = 0; i < 10; i++){
//		for (j = 0; j < 10; j++){
//			printf("hehe:%d\n", count);
//			count++;
//		}
//	}*/
//	//情况2;打印10个hehe
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	for (; i < 10; i++){
//		for ( ; j < 10; j++)
//			//j=10保留下来，进入第二次i循环时，j等于10了
//		{
//			printf("hehe:%d\n", count);
//			count++;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main(){
//	int i = 0;//初始部分
//	//while (i < 10)//判断部分
//	//{
//	//	printf("%d ", i);
//	//	i++;//调整部分
//	//}
//	for (i = 1; i < 10; i++){
//		
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//	}



//	/*int ch = 0;
//	while ((ch = getchar()) != EOF){
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}*/
//	//int ch = 0;
//	//char password[20] = { 0 };
//	//printf("请输入密码>");
//	//scanf("%s", password);
//	////处理缓冲区多余的字符
//	//while (getchar() != '\n'){
//	//	;
//	//}
//	//printf("请确认（Y/N):>");
//	//ch = getchar();
//	//if ('Y' == ch){
//	//	printf("确认成功\n");
//	//}
//	//else{
//	//	printf("确认放弃\n");
//	//}
//
//
//	//int i = 1;
//	//while (i <= 10){
//	//	if (i == 5){
//	//		//break;
//	//		continue;
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	system("pause");
//	return 0;
//}