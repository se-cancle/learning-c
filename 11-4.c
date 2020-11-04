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
	//创建通讯录
	Contact con[MAX] = { 0 };
	int input = 0;
	do{
		menu();
		printf("请输入选择：\n");
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
			printf("退出通讯录!\n");
			break;
		default:
			printf("选择有误\n");
			break;
		}

	} while (input);

	system("pause");
	return 0;
}