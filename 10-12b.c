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
	printf("1.新增联系人\n");
	printf("2.删除联系人\n");
	printf("3.查找联系人\n");
	printf("4.修改联系人\n");
	printf("5.打印全部联系人\n");
	printf("6.清空全部联系人\n");
	printf("0.退出\n");
	printf("==========================\n");
	printf("请输入您的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}


//描述一个联系人信息
typedef struct PersonInfo{
	//name的长度1kb
	char name[1024];
	char phone[1024];

}PersonInfo;
//使用数组组织若干个联系人信息
typedef struct AddressBook{
	PersonInfo* persons;
		//PersonInfo persons[MAX_SIZE];//200是最大容量
		int capacity;//当前数组的最大容量
	int size;
	//size区分当前数组中多少个元素是有效元素
	//[0,size)这个范围中的元素是有效元素
	//[size,200)这个范围中的元素是无效元素

}AddressBook;



void ReallocPersons(AddressBook* addr_book){
	//1.直接使用realloc
	//.addr_book->capacity += 20;
	//addr_book->persons = (PersonInfo*)realloc(add_book->persons, addr_book->capacity*sizeof(PersonInfo));
	//2.通过malloc的方式手动申请一个更大的内存
	////a)先把capacity变大
	addr_book->capacity += 20;
	////b)根据新的capacity大小，申请一个更大的内存空间
	PersonInfo* newPersons = (PersonInfo*)malloc(sizeof(PersonInfo)*addr_book->capacity);
	////c)把旧的内存上的数据拷贝到新的内存上，使用memcpy拷贝，循环数组，通过结构体赋值
	//memcpy(newPersons, addr_book->persons, addr_book->size*sizeof(PersonInfo));
	//c2)可以通过循环的方式来进行拷贝
		for (int i = 0; i < addr_book->size; i++){
			/* strcpy(newPersons[i].name, addr_book->persons[i].name);
			strcpy(newPersons[i].phone, addr_book->persons[i].phone);*/
			newPersons[i] = addr_book->persons[i];
		}
	////d)释放旧的内存空间
	//free(addr_book->persons);
	////e)让新的内存空间上位
	//addr_book->persons = newPersons;
}
void Save(AddressBook* addr_book){
	//把通讯录中的所有数据都保存到文件中
	//1.先打开文件
	FILE* fp = fopen("g:/add_book.txt", "w");
	if (fp == NULL){
		perror("文件打开失败!\n");
		return;
	}
	//2.遍历通讯录中的内容，把数据写入到文件中
	for (int i = 0; i < addr_book->size; i++){
		fwrite(&addr_book->persons[i], sizeof(PersonInfo), 1, fp);
	}
	fclose(fp);
	printf("保存成功!\n");
}

//此处的参数设为指针类型，原因有2 
//1.结构体作为函数参数的时候，需要进行拷贝操作，而结构体占据内存可能比较大，参数写成指针类型，就能降低拷贝开销
//2.初始化函数内部需要修改结构体变量的内容的，我们需要在函数内部修改，同时能影响到函数外部，此时传指针相当于输出型参数
void Init(AddressBook* addr){
	//初始化通讯库结构体
	addr->size = 0;
	addr->persons = (PersonInfo*)malloc(addr->capacity * sizeof(PersonInfo));
	for (int i = 0; i < addr->capacity; i++){
		strcpy(addr->persons[i].name, " ");
		strcpy(addr->persons[i].phone, " ");
	}
}
void Load(AddressBook* addr_book){
	//1.打开文件
	FILE*fp = fopen("g:/add_book.txt", "r");
	if (fp == NULL){
		perror("文件打开失败!\n");
		return;
	}
	//2.循环读取文件中的内容，并把数据加载到通讯录结构体中
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
		//联系人满了
		//此处进行扩容逻辑
		ReallocPersons(addr_book);
		/*printf("通讯库已满！新增失败！\n");
		return;*/
	}
	PersonInfo* info = &addr_book->persons[addr_book->size];
	printf("新增联系人！\n");
	printf("请输入联系人姓名: ");

	scanf("%s", info->name);
	printf("请输入联系人号码：");
	scanf("%s", info->phone);
	addr_book->size++;
	printf("新增联系人成功!\n");
}
void DelPersonInfo(AddressBook*  addr_book){

	//删除的策略，可以指定用户名删除，也可以指定序号删除
	printf("执行删除操作!\n");

	if (addr_book->size <= 0){
		printf("通讯录为空！删除失败！\n");
		return;
	}

	printf("请输入要删除联系人的序号: ");
	int id = 0;//此处的序号就是联系人数组的下标
	scanf("%d", &id);
	if (id < 0 || id >= addr_book->size){
		printf("输入的id非法!删除失败!\n");
		return;
	}

	//获取到最后一个元素
	PersonInfo* last_info = &addr_book->persons[addr_book->size - 1];
	//获取到待删除元素
	PersonInfo* to_delete = &addr_book->persons[id];
	//把最后一个元素赋值给待删除元素
	*to_delete = *last_info;
	//更新size
	addr_book->size--;
	printf("删除成功!\n");
}
void FindPersinInfo(AddressBook*  addr_book){
	//此处按照联系人姓名查找，如果存在重名，把所有记录都获取到
	printf("查找指定联系人!\n");
	printf("请输入要查找的联系人姓名: ");
	char name[1024] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < addr_book->size; i++){
		PersonInfo* info = &addr_book->persons[i];
		if (strcmp(name, info->name) == 0){
			//找到了
			printf("[%d] %s:%s\n", i, info->name, info->phone);
		}
	}
	printf("是查找指定联系人完毕!\n");
}
void ModifyPersonInfo(AddressBook*  addr_book){
	//修改联系人内容，修改指定需要的联系人的姓名或者电话
	if (addr_book->size <= 0){
		printf("通讯录为空！修改失败!\n");
		return;
	}
	//让用户输入要修改的id'
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addr_book->size){
		printf("输入的序号非法，修改失败!\n");
		return;
	}
	//修改
	PersonInfo* info = &addr_book->persons[id];
	printf("请输入修改后的姓名(* 表示不变）: ");
	char name[1024] = { 0 };
	scanf("%s", name);
	if (strcmp(name, "*") != 0){
		strcpy(info->name, name);
	}

	printf("请输入修改后的电话（*表示不变）: ");
	char phone[1024] = { 0 };
	scanf("%s", phone);
	if (strcmp(phone, "*") != 0){
		strcpy(info->phone, phone);
	}
	printf("修改成功!\n");
}
void PrintAllPersonInfo(AddressBook*  addr_book){
	printf("打印所有联系人：\n");
	for (int i = 0; i < addr_book->size; i++){
		PersonInfo*info = &addr_book->persons[i];
		printf(" [%d] %s: %s\n", i, info->name, info->phone);
	}
	printf("当前共打印%d条记录！\n", addr_book->size);
}
void CleanPersonInfo(AddressBook*  addr_book){
	//删除全部记录，是一个危险操作！！最好有一个提示，提示是否确定真的要删除
	printf("删除全部记录！\n");
	printf("确定删除？Y\N\n");
	char choice[1024] = { 0 };
	scanf("%s", choice);
	if (strcmp(choice, "Y") == 0){
		addr_book->size = 0;
		printf("删除成功!\n");
		return;
	}
	else{
		printf("删除已经取消!\n");
		return;
	}
}


int main(){
	AddressBook address_book;
	//此处存在风险，一旦AddressBook太大了，就会导致程序崩溃
	//局部变量，存储的内存空间区域是在操作系统的‘栈’空间上
	//栈空间大小是有限的，如果创建的局部变量太大，就会出现崩溃的情况
	Init(&address_book);
	Load(&address_book);
	typedef void(*Func)(AddressBook*);
	Func func_table[] = {
		NULL,//NULL纯属是为了占位置，为了让后续函数的下表和用户输入的命令一一对应
		AddPersonInfo,
		DelPersonInfo,
		FindPersinInfo,
		ModifyPersonInfo,
		PrintAllPersonInfo,
		CleanPersonInfo,
	};
	while (1){
		//和用户进行交互
		int choice = Menu();
		if (choice < 0 || choice >= sizeof(func_table) / sizeof(func_table[0])){
			printf("您的输入有误!\n");
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
		printf("您的输入有误！\n");
		}*/
	}
	system("pause");
	return 0;
}