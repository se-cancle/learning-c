#define _CRT_SECURE_NO_WARNINGS
#include"game10.h"
void menu(){
	printf("********************\n");
	printf("******1.play********\n");
	printf("******0.exit********\n");
	printf("********************\n");
}
void game(){
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	Initmap(show, ROWS, COLS,'*');
	Displaymap(show, ROW, COL);
	Initmap(mine, ROWS, COLS, '0');
	//Displaymap(mine, ROW, COL);
	Setminemap(mine, ROW, COL);
	Displaymap(mine, ROW, COL);
	Findminemap(show, mine, ROW, COL);
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
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������룺");
		}
	} while (input);

	system("pause");
	return 0;
}