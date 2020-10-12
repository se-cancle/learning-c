//#include<stdio.h>
//#include<stdlib.h>
//
//int main(){
//
//
//
//	system("pause");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 200
int Menu(){
	printf("==========================\n");
	printf("1.������ϵ��\n");
	printf("2.ɾ����ϵ��\n");
	printf("3.������ϵ��\n");
	printf("4.�޸���ϵ��\n");
	printf("5.��ӡȫ����ϵ��\n");
	printf("6.���ȫ����ϵ��\n");
	printf("0.�˳�\n");
	printf("==========================\n");
	printf("����������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}


//����һ����ϵ����Ϣ
typedef struct PersonInfo{
	//name�ĳ���1kb
	char name[1024];
	char phone[1024];

}PersonInfo;
//ʹ��������֯���ɸ���ϵ����Ϣ
typedef struct AddressBook{
	PersonInfo* persons;
		//PersonInfo persons[MAX_SIZE];//200���������
		int capacity;//��ǰ������������
	int size;
	//size���ֵ�ǰ�����ж��ٸ�Ԫ������ЧԪ��
	//[0,size)�����Χ�е�Ԫ������ЧԪ��
	//[size,200)�����Χ�е�Ԫ������ЧԪ��

}AddressBook;



void ReallocPersons(AddressBook* addr_book){
	//1.ֱ��ʹ��realloc
	//.addr_book->capacity += 20;
	//addr_book->persons = (PersonInfo*)realloc(add_book->persons, addr_book->capacity*sizeof(PersonInfo));
	//2.ͨ��malloc�ķ�ʽ�ֶ�����һ��������ڴ�
	////a)�Ȱ�capacity���
	addr_book->capacity += 20;
	////b)�����µ�capacity��С������һ��������ڴ�ռ�
	PersonInfo* newPersons = (PersonInfo*)malloc(sizeof(PersonInfo)*addr_book->capacity);
	////c)�Ѿɵ��ڴ��ϵ����ݿ������µ��ڴ��ϣ�ʹ��memcpy������ѭ�����飬ͨ���ṹ�帳ֵ
	//memcpy(newPersons, addr_book->persons, addr_book->size*sizeof(PersonInfo));
	//c2)����ͨ��ѭ���ķ�ʽ�����п���
		for (int i = 0; i < addr_book->size; i++){
			/* strcpy(newPersons[i].name, addr_book->persons[i].name);
			strcpy(newPersons[i].phone, addr_book->persons[i].phone);*/
			newPersons[i] = addr_book->persons[i];
		}
	////d)�ͷžɵ��ڴ�ռ�
	//free(addr_book->persons);
	////e)���µ��ڴ�ռ���λ
	//addr_book->persons = newPersons;
}
void Save(AddressBook* addr_book){
	//��ͨѶ¼�е��������ݶ����浽�ļ���
	//1.�ȴ��ļ�
	FILE* fp = fopen("g:/add_book.txt", "w");
	if (fp == NULL){
		perror("�ļ���ʧ��!\n");
		return;
	}
	//2.����ͨѶ¼�е����ݣ�������д�뵽�ļ���
	for (int i = 0; i < addr_book->size; i++){
		fwrite(&addr_book->persons[i], sizeof(PersonInfo), 1, fp);
	}
	fclose(fp);
	printf("����ɹ�!\n");
}

//�˴��Ĳ�����Ϊָ�����ͣ�ԭ����2 
//1.�ṹ����Ϊ����������ʱ����Ҫ���п������������ṹ��ռ���ڴ���ܱȽϴ󣬲���д��ָ�����ͣ����ܽ��Ϳ�������
//2.��ʼ�������ڲ���Ҫ�޸Ľṹ����������ݵģ�������Ҫ�ں����ڲ��޸ģ�ͬʱ��Ӱ�쵽�����ⲿ����ʱ��ָ���൱������Ͳ���
void Init(AddressBook* addr){
	//��ʼ��ͨѶ��ṹ��
	addr->size = 0;
	addr->persons = (PersonInfo*)malloc(addr->capacity * sizeof(PersonInfo));
	for (int i = 0; i < addr->capacity; i++){
		strcpy(addr->persons[i].name, " ");
		strcpy(addr->persons[i].phone, " ");
	}
}
void Load(AddressBook* addr_book){
	//1.���ļ�
	FILE*fp = fopen("g:/add_book.txt", "r");
	if (fp == NULL){
		perror("�ļ���ʧ��!\n");
		return;
	}
	//2.ѭ����ȡ�ļ��е����ݣ��������ݼ��ص�ͨѶ¼�ṹ����
	PersonInfo tmp = { 0 };
	while (1){
		int n = fread(&tmp, sizeof(PersonInfo), 1, fp);
		if (n < 1){
			break;
		}
		if (addr_book->size >= addr_book->capacity){
			ReallocPersons(addr_book);
		}
		addr_book->persons[addr_book->size] = tmp;
		addr_book->size++;
	}
	fclose(fp);
}


void AddPersonInfo(AddressBook* addr_book){
	if (addr_book->size >= addr_book->capacity){
		//��ϵ������
		//�˴����������߼�
		ReallocPersons(addr_book);
		/*printf("ͨѶ������������ʧ�ܣ�\n");
		return;*/
	}
	PersonInfo* info = &addr_book->persons[addr_book->size];
	printf("������ϵ�ˣ�\n");
	printf("��������ϵ������: ");

	scanf("%s", info->name);
	printf("��������ϵ�˺��룺");
	scanf("%s", info->phone);
	addr_book->size++;
	printf("������ϵ�˳ɹ�!\n");
}
void DelPersonInfo(AddressBook*  addr_book){

	//ɾ���Ĳ��ԣ�����ָ���û���ɾ����Ҳ����ָ�����ɾ��
	printf("ִ��ɾ������!\n");

	if (addr_book->size <= 0){
		printf("ͨѶ¼Ϊ�գ�ɾ��ʧ�ܣ�\n");
		return;
	}

	printf("������Ҫɾ����ϵ�˵����: ");
	int id = 0;//�˴�����ž�����ϵ��������±�
	scanf("%d", &id);
	if (id < 0 || id >= addr_book->size){
		printf("�����id�Ƿ�!ɾ��ʧ��!\n");
		return;
	}

	//��ȡ�����һ��Ԫ��
	PersonInfo* last_info = &addr_book->persons[addr_book->size - 1];
	//��ȡ����ɾ��Ԫ��
	PersonInfo* to_delete = &addr_book->persons[id];
	//�����һ��Ԫ�ظ�ֵ����ɾ��Ԫ��
	*to_delete = *last_info;
	//����size
	addr_book->size--;
	printf("ɾ���ɹ�!\n");
}
void FindPersinInfo(AddressBook*  addr_book){
	//�˴�������ϵ���������ң�������������������м�¼����ȡ��
	printf("����ָ����ϵ��!\n");
	printf("������Ҫ���ҵ���ϵ������: ");
	char name[1024] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < addr_book->size; i++){
		PersonInfo* info = &addr_book->persons[i];
		if (strcmp(name, info->name) == 0){
			//�ҵ���
			printf("[%d] %s:%s\n", i, info->name, info->phone);
		}
	}
	printf("�ǲ���ָ����ϵ�����!\n");
}
void ModifyPersonInfo(AddressBook*  addr_book){
	//�޸���ϵ�����ݣ��޸�ָ����Ҫ����ϵ�˵��������ߵ绰
	if (addr_book->size <= 0){
		printf("ͨѶ¼Ϊ�գ��޸�ʧ��!\n");
		return;
	}
	//���û�����Ҫ�޸ĵ�id'
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addr_book->size){
		printf("�������ŷǷ����޸�ʧ��!\n");
		return;
	}
	//�޸�
	PersonInfo* info = &addr_book->persons[id];
	printf("�������޸ĺ������(* ��ʾ���䣩: ");
	char name[1024] = { 0 };
	scanf("%s", name);
	if (strcmp(name, "*") != 0){
		strcpy(info->name, name);
	}

	printf("�������޸ĺ�ĵ绰��*��ʾ���䣩: ");
	char phone[1024] = { 0 };
	scanf("%s", phone);
	if (strcmp(phone, "*") != 0){
		strcpy(info->phone, phone);
	}
	printf("�޸ĳɹ�!\n");
}
void PrintAllPersonInfo(AddressBook*  addr_book){
	printf("��ӡ������ϵ�ˣ�\n");
	for (int i = 0; i < addr_book->size; i++){
		PersonInfo*info = &addr_book->persons[i];
		printf(" [%d] %s: %s\n", i, info->name, info->phone);
	}
	printf("��ǰ����ӡ%d����¼��\n", addr_book->size);
}
void CleanPersonInfo(AddressBook*  addr_book){
	//ɾ��ȫ����¼����һ��Σ�ղ������������һ����ʾ����ʾ�Ƿ�ȷ�����Ҫɾ��
	printf("ɾ��ȫ����¼��\n");
	printf("ȷ��ɾ����Y\N\n");
	char choice[1024] = { 0 };
	scanf("%s", choice);
	if (strcmp(choice, "Y") == 0){
		addr_book->size = 0;
		printf("ɾ���ɹ�!\n");
		return;
	}
	else{
		printf("ɾ���Ѿ�ȡ��!\n");
		return;
	}
}


int main(){
	AddressBook address_book;
	//�˴����ڷ��գ�һ��AddressBook̫���ˣ��ͻᵼ�³������
	//�ֲ��������洢���ڴ�ռ��������ڲ���ϵͳ�ġ�ջ���ռ���
	//ջ�ռ��С�����޵ģ���������ľֲ�����̫�󣬾ͻ���ֱ��������
	Init(&address_book);
	Load(&address_book);
	typedef void(*Func)(AddressBook*);
	Func func_table[] = {
		NULL,//NULL������Ϊ��ռλ�ã�Ϊ���ú����������±���û����������һһ��Ӧ
		AddPersonInfo,
		DelPersonInfo,
		FindPersinInfo,
		ModifyPersonInfo,
		PrintAllPersonInfo,
		CleanPersonInfo,
	};
	while (1){
		//���û����н���
		int choice = Menu();
		if (choice < 0 || choice >= sizeof(func_table) / sizeof(func_table[0])){
			printf("������������!\n");
			continue;
		}if (choice == 0){
			Save(&address_book);
			printf("goodbye!\n");
			break;
		}
		func_table[choice](&address_book);
		/*if (choice == 0){
		printf("goodbye!\n");
		break;
		}
		else if (choice == 1){
		AddPersonInfo(&address_book);
		}
		else if (choice == 2){
		DelPersonInfo(&address_book);
		}
		else if (choice == 3){
		FindPersinInfo(&address_book);
		}
		else if (choice == 4){
		ModifyPersonInfo(&address_book);
		}
		else if (choice == 5){
		PrintAllPersonInfo(&address_book);
		}
		else if (choice == 6){
		CleanPersonInfo(&address_book);
		}
		else{
		printf("������������\n");
		}*/
	}
	system("pause");
	return 0;
}