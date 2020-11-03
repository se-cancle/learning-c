#include"contact.h"


void add_contact(Contact* pc){
	if (pc->sz == MAX){
		printf("ͨѶ¼����\n");
	}
	else{
		printf("��������˵����֣�");
		scanf("%s", pc->data[pc->sz].name);
		printf("��������˵��Ա�");
		scanf("%s", pc->data[pc->sz].sex);
		printf("��������˵����䣺");
		scanf("%d", &pc->data[pc->sz].age);
		printf("��������˵ĵ绰��");
		scanf("%s", pc->data[pc->sz].tele);
		printf("��������˵ĵ�ַ��");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("�����ϵ�˳ɹ�\n");
	}
}

void show_contact(Contact* pc){
	printf("%10s %5s %5s %12s %20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
				//�ҵ��ˣ���������λ���±�
				return i;
			}
			else{
				return -1;//�Ҳ���
			}
		}
}
void del_contact(Contact* pc){
	if (pc->sz == 0){
		printf("ͨѶ¼Ϊ��!\n");
	}
	else{
		char name[MAX_NAME] = { 0 };
		printf("������Ҫɾ���˵����֣�");
		scanf("%s", name);
		//����ɾ���˵�λ��
		int pos = find_peo_byname(pc,name);
		if (pos == -1){
			printf("ɾ�����˲�����\n");
		}
		else{
			//2.ɾ��
			for (int j = 0; j < pc->sz - 1; j++){
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�!\n");
		}
	}
}

void search_contact(Contact* pc){
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�������");
		scanf("%s", name);
		int pos = find_peo_byname(pc, name);
		if (pos == -1){
			printf("δ�ҵ�\n");
		}
		else{
			printf("%10s %5s %5s %12s %20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�������");
	scanf("%s", name);
	int pos = find_peo_byname(pc, name);
	if (pos == -1){
		printf("δ�ҵ�\n");
	}
	else{
		printf("�����µ����֣�");
		scanf("%s", pc->data[pos].name);
		printf("�����µ��Ա�");
		scanf("%s", pc->data[pos].sex);
		printf("�����µ����䣺");
		scanf("%d", &pc->data[pos].age);
		printf("�����µĵ绰��");
		scanf("%s", pc->data[pos].tele);
		printf("�����µĵ�ַ��");
		scanf("%s", pc->data[pos].addr);
	}
}

void  destroy_contact(Contact* pc){
	printf("�����ϵ����Ϣ��\n");
	printf("ȷ��ɾ����Y\N\n");
	char choice[MAX] = { 0 };
	scanf("%s", choice);
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


void sort_contact(Contact* pc){
	for (int i = 0; i < pc->sz - 1; i++){
		int flag = 1;//�����Ѿ�����
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
