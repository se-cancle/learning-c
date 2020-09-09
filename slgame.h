#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10
void Initmap(char map[ROWS][COLS], int rows, int cols, char set);
void Displaymap(char map[ROWS][COLS], int row, int col);
void Setminemap(char map[ROWS][COLS], int row, int col);
void Findminemap(char minemap[ROWS][COLS], char  showmap[ROWS][COLS], int row, int col);

//void Checkmap(char minemap[ROW][COL], int row, int col);