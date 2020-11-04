#include"contact.h"


void add_contact(Contact* pc){
	if (pc->sz == MAX){
		printf("ͨѶ¼����!\n");
	}
	else{
		printf("������Ҫ����˵�������");
		scanf("%s", pc->data[pc->sz].name);
		printf("������Ҫ����˵��Ա�");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������Ҫ����˵����䣺");
		scanf("%d", &pc->data[pc->sz].age);
		
		printf("������Ҫ����˵ĵ绰��");
		scanf("%s", pc->data[pc->sz].tele);
		printf("������Ҫ����˵�סַ��");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		printf("�����ϵ�˳ɹ�!\n");
	}
	
}

static int find_peo_by_name(Contact* pc,char name){
	for (int i = 0; i < pc->sz; i++){
		if (strcmp(name, pc->data[i].name) == 0){
			return i;//�ҵ���
		}
		else{
			
			return -1;//û�ҵ�
		}
	}
}
void del_contact(Contact* pc){
	if (pc->sz == 0){
		printf("ͨѶ¼Ϊ��!\n");
	}
	else{
		char name[MAX_NAME] = { 0 };
		printf("����Ҫɾ���˵�������");
		scanf("%s", name);
		int ret = find_peo_by_name(pc, name);
		if (ret == -1){
			printf("δ�ҵ�Ҫɾ���˵���Ϣ!\n");
		}
		else{
			//ɾ��
			for (int i = 0; i < pc->sz - 1; i++){
				pc->data[i] = pc->data[i + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�!\n");
		}
	}
}
void show_contact(Contact* pc){
	printf("%15s %5s %5s %15s %15s\n",
		" ����", "�Ա�", "����", "�绰", "סַ");
	for (int i = 0; i < pc->sz; i++){
		printf("%15s %5s %5d %15s %15s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].age, pc->data[i].tele, pc->data[i].addr);
	}
}
void search_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ���ҵ��˵�������");
	scanf("%s", name);
	int ret = find_peo_by_name(pc, name);
	if (ret == -1)
	{
		printf("δ�ҵ����˵���Ϣ!\n");
	}
	else{
		printf("%15s %5s %5s %15s %15s\n",
			" ����", "�Ա�", "����", "�绰", "סַ");
		printf("%15s %5s %5d %15s %15s\n",
			pc->data[ret].name, pc->data[ret].sex, pc->data[ret].age, pc->data[ret].tele, pc->data[ret].addr);
	}
}


void modify_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ�޸��˵�������");
	scanf("%s", name);
	int ret = find_peo_by_name(pc, name);
	if (ret == -1)
	{
		printf("δ�ҵ����˵���Ϣ!\n");
	}
	else{
		printf("�������޸��˵�������");
		scanf("%s", pc->data[ret].name);
		printf("�������޸��˵��Ա�");
		scanf("%s", pc->data[ret].sex);
		printf("�������޸��˵����䣺");
		scanf("%d", &pc->data[ret].age);
		printf("�������޸��˵ĵ绰��");
		scanf("%s", pc->data[ret].tele);
		printf("�������޸��˵�סַ��");
		scanf("%s", pc->data[ret].addr);
	}
}

void empty_contact(Contact* pc){
	printf("ȷ��Ҫ���������ϵ�ˣ�Y/N\n");
	char choice[MAX] = { 0 };
	scanf("%s", &choice);
	if (strcmp(choice, "Y") == 0){
		pc->sz = 0;
		printf("ɾ���ɹ�!\n");
		return;
	}
	else{
		printf("ȡ��ɾ��\n");
		return;
	}
}

void sort_byname_contact(Contact* pc){
	for (int i = 0; i < pc->sz - 1; i++){
		int flag = 1;//�����Ѿ�����
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
