#define _CRT_SECURE_NO_WARNINGS
#include"game10.h"
void Initmap(char map[ROWS][COLS], int rows, int cols, char set){
	int i = 0;
	int j = 0;
	for (i = 0; i <= rows; i++){
		for (j = 0; j <= cols; j++){
			map[i][j] = set;
		}
	}
}
void Displaymap(char map[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	printf("--------------------------------\n");
	for (i = 0; i <= col; i++){
		printf("%d ", i);
	}printf("\n");
	for (i = 1; i <= row; i++){
		printf("%d ", i);
		for (j = 1; j <= col; j++){
			printf("%c ", map[i][j]);
		}printf("\n");
	}printf("--------------------------------\n");	
}

void Setminemap(char mine[ROWS][COLS], int row, int col){
	int count = COUNT;
	while (count){
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0'){
			mine[x][y] = '1';
			count--;
		}
	}
}
int  Getminemap(char mine[ROWS][COLS], int i, int j){
	return mine[i - 1][j] + mine[i - 1][j - 1] + mine[i][j - 1] + mine[i + 1][j - 1]
		+ mine[i + 1][j] + mine[i + 1][j + 1] + mine[i][j + 1] + mine[i - 1][j + 1]-8*'0';
}

void Findminemap(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	int win = 0;
	while (win<ROW*COL-COUNT){
		printf("请输入要翻开位置的坐标:\n");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row&&j >= 1 && j <= col){
			if (mine[i][j] == '1'){
				printf("踩雷了，游戏失败!\n");
				Displaymap(mine, i, j);
				break;
			}
			else{
				int count = Getminemap(mine, i, j);
				show[i][j] = count + '0';
				Displaymap(show, ROW, COL);
				win++;
				
			}
		}
		else{
			printf("输入了非法坐标\n");
		}
	}if (win == ROW*COL - COUNT){
		printf("恭喜你，扫雷成功!");
	}
}

