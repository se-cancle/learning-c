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
//		//k=0,0Ϊ�٣�һ�ζ���ѭ��
//		k++;
//	system("pause");
//	return 0;
//}
//int main(){
//	//���1����ӡ100��hehe
//	/*int i = 0;
//	int j = 0;
//	int count = 1;
//	for (i = 0; i < 10; i++){
//		for (j = 0; j < 10; j++){
//			printf("hehe:%d\n", count);
//			count++;
//		}
//	}*/
//	//���2;��ӡ10��hehe
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	for (; i < 10; i++){
//		for ( ; j < 10; j++)
//			//j=10��������������ڶ���iѭ��ʱ��j����10��
//		{
//			printf("hehe:%d\n", count);
//			count++;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main(){
//	int i = 0;//��ʼ����
//	//while (i < 10)//�жϲ���
//	//{
//	//	printf("%d ", i);
//	//	i++;//��������
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
//	//printf("����������>");
//	//scanf("%s", password);
//	////��������������ַ�
//	//while (getchar() != '\n'){
//	//	;
//	//}
//	//printf("��ȷ�ϣ�Y/N):>");
//	//ch = getchar();
//	//if ('Y' == ch){
//	//	printf("ȷ�ϳɹ�\n");
//	//}
//	//else{
//	//	printf("ȷ�Ϸ���\n");
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