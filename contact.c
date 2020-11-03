#include"contact.h"


void add_contact(Contact* pc){
	if (pc->sz == MAX){
		printf("通讯录已满\n");
	}
	else{
		printf("输入添加人的名字：");
		scanf("%s", pc->data[pc->sz].name);
		printf("输入添加人的性别：");
		scanf("%s", pc->data[pc->sz].sex);
		printf("输入添加人的年龄：");
		scanf("%d", &pc->data[pc->sz].age);
		printf("输入添加人的电话：");
		scanf("%s", pc->data[pc->sz].tele);
		printf("输入添加人的地址：");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("添加联系人成功\n");
	}
}

void show_contact(Contact* pc){
	printf("%10s %5s %5s %12s %20s\n", "名字", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < pc->sz; i++){
		printf("%10s %5s %5d %12s %20s\n", 
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int find_peo_byname(Contact* pc,char name){

		for (int i = 0; i < pc->sz; i++){
			if (strcmp(name, pc->data[i].name) == 0){
				//找到了，返回所在位置下标
				return i;
			}
			else{
				return -1;//找不到
			}
		}
}
void del_contact(Contact* pc){
	if (pc->sz == 0){
		printf("通讯录为空!\n");
	}
	else{
		char name[MAX_NAME] = { 0 };
		printf("请输入要删除人的名字：");
		scanf("%s", name);
		//查找删除人的位置
		int pos = find_peo_byname(pc,name);
		if (pos == -1){
			printf("删除的人不存在\n");
		}
		else{
			//2.删除
			for (int j = 0; j < pc->sz - 1; j++){
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("删除成功!\n");
		}
	}
}

void search_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的姓名：");
		scanf("%s", name);
		int pos = find_peo_byname(pc, name);
		if (pos == -1){
			printf("未找到\n");
		}
		else{
			printf("%10s %5s %5s %12s %20s\n", "名字", "性别", "年龄", "电话", "地址");
				printf("%10s %5s %5d %12s %20s\n",
					pc->data[pos].name,
					pc->data[pos].sex,
					pc->data[pos].age,
					pc->data[pos].tele,
					pc->data[pos].addr);
			}
}

void modify_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的姓名：");
	scanf("%s", name);
	int pos = find_peo_byname(pc, name);
	if (pos == -1){
		printf("未找到\n");
	}
	else{
		printf("输入新的名字：");
		scanf("%s", pc->data[pos].name);
		printf("输入新的性别：");
		scanf("%s", pc->data[pos].sex);
		printf("输入新的年龄：");
		scanf("%d", &pc->data[pos].age);
		printf("输入新的电话：");
		scanf("%s", pc->data[pos].tele);
		printf("输入新的地址：");
		scanf("%s", pc->data[pos].addr);
	}
}

void  destroy_contact(Contact* pc){
	printf("清空联系人信息！\n");
	printf("确定删除？Y\N\n");
	char choice[MAX] = { 0 };
	scanf("%s", choice);
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


void sort_contact(Contact* pc){
	for (int i = 0; i < pc->sz - 1; i++){
		int flag = 1;//假设已经有序
		for (int j = 0; j <pc->sz-1-i ; j++){
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0){
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag){
			break;
		}
	}
}
