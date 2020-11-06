#include"contact11-6.h"

void menu(){
	printf("***************************\n");
	printf("****1.add     2.del   *****\n");
	printf("****3.search  4.modify*****\n");
	printf("****5.show    6.empty *****\n");
	printf("****7.sort    0.exit  *****\n");
	printf("***************************\n");
}
enum option{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW, 
	EMPTY,
	SORT
};

int main(){
	int input = 0;
	Contact con= { 0 };
	init_contact(&con);
	do{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add_contact(&con);
			break;
		case DEL:
			del_contact(&con);
			break;
		case SEARCH:
			search_contact(&con);
			break;
		case MODIFY:
			modify_contact(&con);
			break;
		case SHOW:
			show_contact(&con);
			break;
		case EMPTY:
			empty_contact(&con);
			break;
		case SORT:
			sort_contact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼!\n");
			break;
		default:
			printf("ѡ������!");
			break;
		}
	} while (input);

	return 0;
}