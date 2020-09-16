#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main(){
//	int a = 10;
//	int* pa = &a;
//	int** ppa=&pa;//ppa二级指针
//	system("pause");
//	return 0;
//}

//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", arr);//数组名是首元素地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//int i = 9;
//	//for (i = 0; i < 10; i++){
//	//	printf("%p\n", &arr[i]);
//	//	//地址在内存中是连续存储的，由低到高
//	//}
//	system("pause");
//	return 0;
//}


//指针-指针：计算元素个数
 //int my_strlen(char* str){
	// char* start = str;
	// while (*str != '\0'){
	//	 str++;
	// }
	// return str - start;
	//	
	//}
	//int main(){
	//	char arr[] = "abcdef";
	//	int len =my_strlen(arr);//6
	//	printf("%d\n", len);
	//	system("pause");
	//	return 0;
	//}


//int my_strlen(char* str){
//	int count = 0;
//	while (*str != '\0'){
//		count++;
//		str++;
//
//	}
//	return count;
//}
//int main(){
//	char arr[] = "abcdef";
//	int len =my_strlen(arr);//6
//	printf("%d\n", len);
//}

//int main()
//{
//	int arr[10] = { 1, 3,5,7,3,5,67,3,5,0};
//	printf("%d\n",&arr[9] - &arr[0]);//9中间隔了9个元素
//	printf("%d\n", arr[9] - arr[0]);//4//5-1=4
//
//	system("pause");
//	return 0;
//}
	
//int main(){
//	char arr[] = { 'a', 'b', 'c', 'd' };
//	char* p = arr[3];
//	int i = 0;
//	for (i = 0; i < 4; i++){
//		printf("%c ", *p--);
//	}
//	/*char* p = arr;
//	int i = 0;
//	for (i = 0; i < 4; i++){
//		printf("%c ", *(p + i));
//		printf("%c ", *p++);
//		printf("%p ", p + i);
//	}*/
//	system("pause");
//	return 0;
//}

//int* test(){
//	int a = 10;
//	return &a;
//}
//int main(){
//	int* p=test();
//	return 0; 
//	system("pause");
//}

//int main(){
//	char arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("%d ",*(pa + i));
//	}
//	system("pause");
//	return 0;
//}


int main(){
	int a = 10;
	int*pa = &a;
	char* pc = &a;

	printf("%p\n", &a);
	printf("%p\n", pa);
	printf("%p\n", pa + 1);

	printf("%p\n", pc);
	printf("%p\n", pc + 1);


	system("pause");
	return 0;
}