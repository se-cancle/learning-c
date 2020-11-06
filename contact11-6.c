#include"contact11-6.h"

void init_contact(Contact* pc){
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ*sizeof(PeoInfo));
	if (pc->data == NULL){
		perror("InitContact::malloc");
		return;
	}
}

void add_contact(Contact* pc){
	if (pc->sz == pc->capacity){
		//增加容量
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC;
			printf("增容成功\n");
		}
		else{
			perror("add_contact::realloc");
			return;

		}
	}
	printf("请输入添加人的姓名：");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入添加人的性别：");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入添加人的年龄：");
	scanf("%s", &pc->data[pc->sz].age);
	printf("请输入添加人的电话：");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入添加人的住址：");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加联系人成功！\n");
}
int find_peo_by_name(Contact*pc, char name){
	for (int i = 0; i < pc->sz; i++){
		if (strcmp(name, pc->data[i].name) == 0){
			return i;//找到了
		}
	}
	return -1;//没找到
}
void del_contact(Contact* pc){
	if (pc->sz == 0){
		printf("通讯录为空!");
	}
	else{
		char name[MAX_NAME] = { 0 };
		printf("输入要删除人的姓名：");
		scanf("%s", name);
		int ret=find_peo_by_name(pc, name);
		if (ret == -1){
			printf("未找到要删除人的信息！\n");
		}
		else{
			//删除
			for (int j = 0; j < pc->sz; j++){
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
		}
	}
}

void show_contact(Contact* pc)
{
	int i = 0;
	printf("%10s %12s %5s %12s %15s\n", "姓名", "性别", "年龄", "电话", "住址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s %12s %5s %12s %15s\n", pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


void search_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("输入要查找人的姓名：");
	scanf("%s", name);
	int ret = find_peo_by_name(pc, name);
	if (ret == -1){
		printf("未找到！\n");
	}
	else{
		printf("%10s %12s %5s %12s %15s\n", "姓名", "性别", "年龄", "电话", "住址");
			printf("%10s %12s %5s %12s %15s\n", pc->data[ret].name,
				pc->data[ret].sex,
				pc->data[ret].age,
				pc->data[ret].tele,
				pc->data[ret].addr);
		}

	}


void modify_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("输入要修改人的姓名：");
	scanf("%s", name);
	int ret = find_peo_by_name(pc, name);
	if (ret == -1){
		printf("未找到！\n");
	}
	else{
		printf("请输入新的姓名：");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入新的性别：");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入新的年龄：");
		scanf("%s", &pc->data[pc->sz].age);
		printf("请输入新的电话：");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入新的住址：");
		scanf("%s", pc->data[pc->sz].addr);
		printf("修改成功!\n");
	}
}

void empty_contact(Contact* pc){
	char choice = 0;
	printf("确定清空所有联系人信息:Y\N\n");
	scanf("%s", &choice);
	if (strcmp(choice,"Y")==0)
	{
		pc->sz = 0;
		printf("删除成功!\n");
	}
	else{
		printf("取消删除!\n");
	}
}

void sort_contact(Contact* pc){
	for (int i = 0; i < pc->sz - 1; i++){
		int flag = 1;//假设已经有序
		for (int j = 0; j < pc->sz - 1 - j; j++){
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
