#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu(){
	printf("************\n");
	printf("***1.play***\n");
	printf("***0.exit***\n");
	printf("************\n");
}
void game(){
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	PrintBoard(board, ROW, COL);
	while (1){
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret = Check(board, ROW, COL);
		if (ret != ' '){
			break;
		}

		ComputerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret = Check(board, ROW, COL);
		if (ret != ' '){
			break;
		}
	}
		if (ret == '*'){
			printf("玩家赢了\n");
		}else if (ret == '#'){
			printf("电脑赢了\n");
		}
		else{
			printf("和棋\n");
		}
	}


int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("请输入选择:");
		scanf("%d", &input);
		switch(input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入有误，请重新输入:");
			break;
		}
	} while (input);

	
	system("pause");
	return 0;
}