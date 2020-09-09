//1.创建地图，9*9的二维数组
#define _CRT_SECURE_NO_WARNINGS
#include"slgame.h"

void menu(){
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
}
void game(){
	char showmap[ROWS][COLS] = { 0 };//翻开状态，*表示未翻开，阿拉伯数字表示翻开
	char minemap[ROWS][COLS] = { 0 };//地雷状态，'1'表示是地雷，'0'表示不是地雷
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
		printf("请输入你的选择：");
		scanf("%d", &input);	
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("非法输入，请重新输入：\n");
		}
	} while (input);
	system("pause");
	return 0;
}