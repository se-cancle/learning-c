//1.������ͼ��9*9�Ķ�ά����
#define _CRT_SECURE_NO_WARNINGS
#include"slgame.h"

void menu(){
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
}
void game(){
	char showmap[ROWS][COLS] = { 0 };//����״̬��*��ʾδ���������������ֱ�ʾ����
	char minemap[ROWS][COLS] = { 0 };//����״̬��'1'��ʾ�ǵ��ף�'0'��ʾ���ǵ���
	Initmap(showmap, ROWS, COLS, '*');
	Displaymap(showmap, ROW, COL);
	Initmap( minemap, ROWS, COLS,'0');
		Setminemap(minemap, ROW, COL);
		Displaymap(minemap, ROW, COL);
		Findminemap(minemap, showmap, ROW, COL);
		
}
		int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);	
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�Ƿ����룬���������룺\n");
		}
	} while (input);
	system("pause");
	return 0;
}