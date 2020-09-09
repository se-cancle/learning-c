#define _CRT_SECURE_NO_WARNINGS
#include"slgame.h"

void Initmap(char map[ROWS][COLS], int rows, int cols,char set){
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			map[i][j] = set;
	
			/*int count = MINE;
			while (count>0){
				int x = rand() % rows;
				int y = rand() % cols;
				if (minemap[x][y] == '1'){
					continue;
				}
				else{
					minemap[x][y] = '1';
				}
				count--;
			}*/
		}
	}
}
void Displaymap(char map[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	printf("--------------------------\n");
	for (i = 0; i <= col; i++){
		printf("%d ", i);
	}printf("\n");
	for (i = 1; i <= row; i++){
		printf("%d ", i);
		for (j = 1; j <= col; j++){
			printf("%c ", map[i][j]);
		}printf("\n");
	}	printf("--------------------------\n");

}
void Setminemap(char map[ROWS][COLS], int row, int col){
	int count = COUNT;
	while (count){
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (map[x][y] == '0'){
			map[x][y] = '1';
			count--;
		}
	}
}
int GetMineMap(char minemap[ROWS][COLS],int i,int j){
	return minemap[i - 1][j] + minemap[i - 1][j - 1] + minemap[i][j - 1] + minemap[i + 1][j - 1]
		+ minemap[i + 1][j] + minemap[i + 1][j + 1] + minemap[i][j + 1] + minemap[i - 1][j + 1] - 8 * '0';
}

void Findminemap(char minemap[ROWS][COLS], char showmap[ROWS][COLS], int row, int col){
	int win = 0;
	int i = 0;
	int j = 0;
	while (win<ROW*COL-COUNT){
		printf("请输入要翻开位置的坐标：\n");
			scanf("%d %d", &i, &j);
			if (i >= 1 && i <= row&&j >= 1 && j <= col){
				if (minemap[i][j] == '1'){
					printf("踩雷了，游戏失败！\n");
					Displaymap(minemap, row, col);
					break;
				}
				else{
					int count = GetMineMap(minemap, i, j);
					showmap[i][j] = count + '0';
					Displaymap(showmap, ROW, COL);
					win++;
			}	
		} 
			else{
				printf("输入了非法坐标\n");
			}
	}if (win==ROW*COL - COUNT){
		printf("恭喜你排雷成功!\n");

 }
}



//
//void Printmap(char showmap[ROW][COL], int row, int col){
//	int x = 0;
//	int y = 0;
//	while(1){
//		printf("玩家输入要翻开位置的坐标：");
//		scanf("%d %d", &x, &y);
//		if (x<0 && x>row &&y > 0 &&y < col){
//			printf("输入有误，请重新输入:");
//			continue;
//		}if (showmap[x][y] != '*'){
//			printf("当前位置已被翻开，请重新输入:");
//			continue;
//		}break;
//	}
//}
//
//void Checkmap(char minemap[ROW][COL], int row, int col){
//	if (minemap[row][col] == '1'){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}