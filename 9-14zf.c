#include<stdio.h>
#include<stdlib.h>
//#pragma pack(4)
//struct Test{
//	char a;
//	double b;
	//char a;
	//int b;//b和c都有放到对齐数的
	//int c;
//};
//enum Sex{
//	MALE,
//	FEMALE,
//	UNKNOWN,
//
//};
union Un{
	int i; 
	char c;
};
typedef union Un Un;
int IsLittleEnd(){
	Un u;
	u.i = 0x11223344;
	if (u.c == 0x44){
		return 1;
	}
	return 0;
}
//union IP{
//	unsigned int data;
//	struct{
//		unsigned char a;
//		unsigned char b;
//		unsigned char c;
//		unsigned char d;
//	}ip_str;
//};
int main(){
	//这个代码就是把点分十进制转成了整数形式的ip
	/*u*//*nion IP ip;
	ip.ip_str.a = 123;
	ip.ip_str.b = 139;
	ip.ip_str.c = 73;
	ip.ip_str.d = 101;
	printf("%u\n", ip.data);*/
	/*union Un u;
	u.i = 10;
	u.c = 20;
	printf("%d\n", u.i);*/
	printf("%d\n", IsLittleEnd());
	system("pause");
	return 0;
}

//int main(){
//	//创建了一个enum Sex 类型的变量，名字叫s,初始化成MALE
//	//enum Sex s = MALE;
//	//enum Sex s = 5;
//	/*enum Sex s = FEMALE;
//	int num = s * 2;*/
//
//	int num = 1;
//	enum Sex s = num;
//	int arr[s] = { 0 };//错误的
//	int arra[FEMALE] = { 0 };//正确的
//
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOWN);
//	//printf("%d\n", sizeof(struct Test));
//	/*struct Test t;
//	printf("sizeof=%d\n", sizeof(struct Test));
//	printf("&t=%p\n", &t);
//	printf("&t.a=%p\n", &t.a);
//	printf("&t.b=%p\n", &t.b);
//	printf("&t.c=%p\n", &t.c);*/
//
//	system("pause");
//	return 0;
//}

//struct Student{
//	char name[1024]; 
//	int age;
//	struct Student* s;
//	//一个指针变量占用的内存空间是固定的，不影响整个结构体占据内存的计算
//};
//int main(){
//	//创建了一个变量s,s的类型就是struct Student
//	struct Student s = { "张三", 18 };
//	struct Student	s2 = { "李四", 19 };
//	//这样的赋值操作就是把结构体中的每个成员变量依次赋值
//	s = s2;
//	//s.name = s2.name;错误的赋值方式
//	strcpy(s.name, s2.name);
//	system("pause");
//	return 0;
//}



//void Memcpy(void* dest, const void* src,size_t num){
//	//assert(dest != NULL&&src != NULL);
//	void* ret = dest;
//	for (size_t i = 0; i < num; i++){
//		*(char*)dest = *(char*)src;
//		dest=(char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//void* Memmove(void* dest, const void* src, size_t num){
//	//assert(dest != NULL&&src != NULL);
//	char* cdest = (char*)dest;
//	char* csrc = (char*)src;
//	if (csrc < cdest &&cdest < csrc + num){
//		char* pdest = cdest + num - 1;
//		char*psrc = csrc + num - 1;
//		for (size_t i = 0; i < num; i++){
//			*pdest = *psrc;
//			pdest--;
//			psrc--;
//		}
//	} 
//	else{
//		Memcpy(dest, src, num);
//	}
//	return dest;
//}
//
//int main(){
//
//	short arr[] = { 1, 2, 3, 4 };
//	short arr2[4] = { 0 };
//	Memcpy(arr2, arr, 8);
//	for (int i = 0; i < 4; i++){
//		printf("%d\n", arr2[i]);
//	}
//	//char str1[] = "hehe";
//	//char str2[] = "hahahaha";
//	////要拷贝的最大的个数
//	//strncpy(str1, str2, sizeof(str1)-1);
//	//printf("%s\n", str1);
//
//
//
//	//char str[] = "This a simple string";
//	////使用" "作为分割符
//	////如果在字符中没有找到分割符，就返回NULL
//	//char*pch = strtok(str, " ");
//	//while (pch != NULL){
//	//	printf("%s\n", pch);
//	//	//第一个参数传NULL表示继续上次划分的位置，往后切分
//	//	pch = strtok(NULL, " ");
//	//}
//	system("pause");
//	return 0;
//}