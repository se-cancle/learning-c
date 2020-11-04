#include"contact.h"


void add_contact(Contact* pc){
	if (pc->sz == MAX){
		printf("通讯录已满!\n");
	}
	else{
		printf("请输入要添加人的姓名：");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入要添加人的性别：");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入要添加人的年龄：");
		scanf("%d", &pc->data[pc->sz].age);
		
		printf("请输入要添加人的电话：");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入要添加人的住址：");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("添加联系人成功!\n");
	}
	
}

static int find_peo_by_name(Contact* pc,char name){
	for (int i = 0; i < pc->sz; i++){
		if (strcmp(name, pc->data[i].name) == 0){
			return i;//找到了
		}
		else{
			
			return -1;//没找到
		}
	}
}
void del_contact(Contact* pc){
	if (pc->sz == 0){
		printf("通讯录为空!\n");
	}
	else{
		char name[MAX_NAME] = { 0 };
		printf("输入要删除人的姓名：");
		scanf("%s", name);
		int ret = find_peo_by_name(pc, name);
		if (ret == -1){
			printf("未找到要删除人的信息!\n");
		}
		else{
			//删除
			for (int i = 0; i < pc->sz - 1; i++){
				pc->data[i] = pc->data[i + 1];
			}
			pc->sz--;
			printf("删除成功!\n");
		}
	}
}
void show_contact(Contact* pc){
	printf("%15s %5s %5s %15s %15s\n",
		" 姓名", "性别", "年龄", "电话", "住址");
	for (int i = 0; i < pc->sz; i++){
		printf("%15s %5s %5d %15s %15s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].age, pc->data[i].tele, pc->data[i].addr);
	}
}
void search_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("输入要查找的人的姓名：");
	scanf("%s", name);
	int ret = find_peo_by_name(pc, name);
	if (ret == -1)
	{
		printf("未找到此人的信息!\n");
	}
	else{
		printf("%15s %5s %5s %15s %15s\n",
			" 姓名", "性别", "年龄", "电话", "住址");
		printf("%15s %5s %5d %15s %15s\n",
			pc->data[ret].name, pc->data[ret].sex, pc->data[ret].age, pc->data[ret].tele, pc->data[ret].addr);
	}
}


void modify_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("输入要修改人的姓名：");
	scanf("%s", name);
	int ret = find_peo_by_name(pc, name);
	if (ret == -1)
	{
		printf("未找到此人的信息!\n");
	}
	else{
		printf("请输入修改人的姓名：");
		scanf("%s", pc->data[ret].name);
		printf("请输入修改人的性别：");
		scanf("%s", pc->data[ret].sex);
		printf("请输入修改人的年龄：");
		scanf("%d", &pc->data[ret].age);
		printf("请输入修改人的电话：");
		scanf("%s", pc->data[ret].tele);
		printf("请输入修改人的住址：");
		scanf("%s", pc->data[ret].addr);
	}
}

void empty_contact(Contact* pc){
	printf("确定要清空所有联系人：Y/N\n");
	char choice[MAX] = { 0 };
	scanf("%s", &choice);
	if (strcmp(choice, "Y") == 0){
		pc->sz = 0;
		printf("删除成功!\n");
		return;
	}
	else{
		printf("取消删除\n");
		return;
	}
}

void sort_byname_contact(Contact* pc){
	for (int i = 0; i < pc->sz - 1; i++){
		int flag = 1;//假设已经有序
		for (int j = 0; j < pc->sz - 1 - i; j++){
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0){
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}
		if (1 == flag){
			break;
		}
	}
}
