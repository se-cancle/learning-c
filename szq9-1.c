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
			printf("���Ӯ��\n");
		}else if (ret == '#'){
			printf("����Ӯ��\n");
		}
		else{
			printf("����\n");
		}
	}


int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("������ѡ��:");
		scanf("%d", &input);
		switch(input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("������������������:");
			break;
		}
	} while (input);

	
	system("pause");
	return 0;
}