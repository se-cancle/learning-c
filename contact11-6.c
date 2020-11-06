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
		//��������
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC)*sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC;
			printf("���ݳɹ�\n");
		}
		else{
			perror("add_contact::realloc");
			return;

		}
	}
	printf("����������˵�������");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������˵��Ա�");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������˵����䣺");
	scanf("%s", &pc->data[pc->sz].age);
	printf("����������˵ĵ绰��");
	scanf("%s", pc->data[pc->sz].tele);
	printf("����������˵�סַ��");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("�����ϵ�˳ɹ���\n");
}
int find_peo_by_name(Contact*pc, char name){
	for (int i = 0; i < pc->sz; i++){
		if (strcmp(name, pc->data[i].name) == 0){
			return i;//�ҵ���
		}
	}
	return -1;//û�ҵ�
}
void del_contact(Contact* pc){
	if (pc->sz == 0){
		printf("ͨѶ¼Ϊ��!");
	}
	else{
		char name[MAX_NAME] = { 0 };
		printf("����Ҫɾ���˵�������");
		scanf("%s", name);
		int ret=find_peo_by_name(pc, name);
		if (ret == -1){
			printf("δ�ҵ�Ҫɾ���˵���Ϣ��\n");
		}
		else{
			//ɾ��
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
	printf("%10s %12s %5s %12s %15s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("����Ҫ�����˵�������");
	scanf("%s", name);
	int ret = find_peo_by_name(pc, name);
	if (ret == -1){
		printf("δ�ҵ���\n");
	}
	else{
		printf("%10s %12s %5s %12s %15s\n", "����", "�Ա�", "����", "�绰", "סַ");
			printf("%10s %12s %5s %12s %15s\n", pc->data[ret].name,
				pc->data[ret].sex,
				pc->data[ret].age,
				pc->data[ret].tele,
				pc->data[ret].addr);
		}

	}


void modify_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ�޸��˵�������");
	scanf("%s", name);
	int ret = find_peo_by_name(pc, name);
	if (ret == -1){
		printf("δ�ҵ���\n");
	}
	else{
		printf("�������µ�������");
		scanf("%s", pc->data[pc->sz].name);
		printf("�������µ��Ա�");
		scanf("%s", pc->data[pc->sz].sex);
		printf("�������µ����䣺");
		scanf("%s", &pc->data[pc->sz].age);
		printf("�������µĵ绰��");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������µ�סַ��");
		scanf("%s", pc->data[pc->sz].addr);
		printf("�޸ĳɹ�!\n");
	}
}

void empty_contact(Contact* pc){
	char choice = 0;
	printf("ȷ�����������ϵ����Ϣ:Y\N\n");
	scanf("%s", &choice);
	if (strcmp(choice,"Y")==0)
	{
		pc->sz = 0;
		printf("ɾ���ɹ�!\n");
	}
	else{
		printf("ȡ��ɾ��!\n");
	}
}

void sort_contact(Contact* pc){
	for (int i = 0; i < pc->sz - 1; i++){
		int flag = 1;//�����Ѿ�����
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
