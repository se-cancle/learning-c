#include<stdio.h>
#include<stdlib.h>






int main(){
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	system("pause");
	return 0;
}


//int main(){
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	system("pause");
//	return 0;
//}

//int main(){
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	system("pause");
//	return 0;
//}
//int main(){
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//}


//int main(){
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	system("pause");
//	return 0;
//}

//
////int main(){
////	int a[4] = { 1, 2, 3, 4 };
////	int* ptr1 = (int*)(&a + 1);
////	int* ptr2 = (int*)((int)a + 1);
////	printf("%x %x", ptr1[-1], *ptr2);
////	system("pause");
////	return 0;
////
////}
////struct Test{
////	int Num;
////	char* pcName;
////	short sDate;
////	char cha[2];
////	short sBa[4];
////};
////
////int main(){
////	struct Test*p = (struct Test*)0x100000;
////	printf("%d\n", sizeof(struct Test));
////	printf("%p\n", p + 0x1);
////	printf("%p\n", (unsigned long)p + 0x1);
////	printf("%p\n", (unsigned int*)p + 0x1);
////
////
////
////	system("pause");
////	return 0;
////}