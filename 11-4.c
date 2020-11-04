#include"contact.h"
void menu(){
	printf("*****************************\n");
	printf("***1.add     2.del    ******\n");
	printf("***3.search  4.modify ******\n");
	printf("***5.show    6.empty  ******\n");
	printf("***7.sort    0.exit   ******\n");
	printf("****************************\n");
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
	//����ͨѶ¼
	Contact con[MAX] = { 0 };
	int input = 0;
	do{
		menu();
		printf("������ѡ��\n");
		scanf("%d", &input);
		switch (input){
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
			sort_byname_contact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼!\n");
			break;
		default:
			printf("ѡ������\n");
			break;
		}

	} while (input);

	system("pause");
	return 0;
}