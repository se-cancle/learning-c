#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define COUNT 10
void menu(){
	printf("******************\n");
	printf("******1.play******\n");
	printf("******0.exit******\n");
	printf("******************\n");
}
void Init(char showmap[ROW][COL], char minemap[ROW][COL], int row, int col){
	//int x = 0;
	//int y = 0;
	//for (x = 0; x < row; x++){
	//	for (y = 0; y < col; y++){
	//		showmap[x][y] = '*';
	//		minemap[x][y] = '0';
	//	}
	//}
	memset(showmap, '*', ROW*COL);
	memset(minemap, '0', ROW*COL);
	srand((unsigned int)time(NULL));
	int count = COUNT;
	while (count > 0){
		int row = rand() % ROW;
		int col = rand() % COL;
		if (minemap[row][col] == '1'){
			continue;
		}
		else{
			minemap[row][col] ='1';
		}
		count--;
	}
}
void Printshowmap(char showmap[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++){
		for (y = 0; y < col; y++){
			printf("%c ", showmap[x][y]);
		}
		printf("\n");
	}
}
void Input(char showmap[ROW][COL],int* row, int*col){
	while (1){
		printf("请输入要翻开位置的坐标：");
			scanf("%d %d", &row, &col);
			if (*row < 0 && *row >= ROW && *col < 0 && *col >= COL){
				printf("您的输入有误，请重新输入:");
			}if (showmap[*row][*col] != '*'){
				printf("当前位置已经翻开");
					continue;
			}
	}
}

void game(){
	char showmap[ROW][COL] = { 0 };
	char minemap[ROW][COL] = { 0 };
	Init(showmap, minemap, ROW, COL);
	while (1){
		Printshowmap(showmap, ROW, COL);
		int row = 0;
		int col = 0;
		Input(showmap, &row, &col);
		/*if (Checkmine(minemap, ROW, COL)){
			printf("踩雷了，游戏失败!");
			break;
		}*/
	}	
}
int main(){
	while (1){
		menu();
		int input = 0;
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!");
			break;
		default:
			printf("非法输入，请重新输入：");
		}
	}
	system("pause");
	return 0;
}