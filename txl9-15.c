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
	PersonInfo persons[MAX_SIZE];//200���������
	int size;
	//size���ֵ�ǰ�����ж��ٸ�Ԫ������ЧԪ��
	//[0,size)�����Χ�е�Ԫ������ЧԪ��
	//[size,200)�����Χ�е�Ԫ������ЧԪ��

}AddressBook;
//�˴��Ĳ�����Ϊָ�����ͣ�ԭ����2 
//1.�ṹ����Ϊ����������ʱ����Ҫ���п������������ṹ��ռ���ڴ���ܱȽϴ󣬲���д��ָ�����ͣ����ܽ��Ϳ�������
//2.��ʼ�������ڲ���Ҫ�޸Ľṹ����������ݵģ�������Ҫ�ں����ڲ��޸ģ�ͬʱ��Ӱ�쵽�����ⲿ����ʱ��ָ���൱������Ͳ���
void Init(AddressBook* addr){
//��ʼ��ͨѶ��ṹ��
	addr->size = 0;
	for (int i = 0; i < MAX_SIZE; i++){
		strcpy(addr->persons[i].name, "");
		strcpy(addr->persons[i].phone, "");
	}
}
void AddPersonInfo(AddressBook* addr_book){
	if (addr_book->size >= MAX_SIZE){
		printf("ͨѶ������������ʧ�ܣ�\n");
		return;
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

	typedef void(*Func)(AddressBook*);
	Func func_table[] = {
		NULL,//NULL������Ϊ��ռλ�ã�Ϊ���ú����������±����û����������һһ��Ӧ
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