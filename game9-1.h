#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void PrintBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

char Check(char board[ROW][COL], int row, int col);
