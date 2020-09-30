//#include<stdio.h>
#include<stdlib.h>
//void foo(int b[][3])
//{
//	++b;
//	b[1][1] = 9;
//}
//void main()
//	{
//		int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//		foo(a);
//		printf("%d", a[2][1]);
//	system("pause");
//	return 0;
//}



//int add(int *x, int *y, int *z){
//	*x += *x;
//	*y += *x;
//	*z += *y;
//	return *z;
//}
//
//void main()
//{
//	//划分三块内存区域
//	int a = 1, b = 1, c = 1;
//	//注意经过一次add()之后，a，b，c的值有可能发生改变，注意要值要归1
//	printf("指向同一内存区域%d\n", add(&a, &a, &a));
//	a = 1, b = 1, c = 1;
//	printf("指向不同内存区域%d\n", add(&a, &b, &c));
//	a = 1, b = 1, c = 1;
//	printf("x.y指向同一内存区域%d\n", add(&a, &a, &b));
//	a = 1, b = 1, c = 1;
//	printf("x.z指向同一内存区域%d\n", add(&a, &c, &a));
//	a = 1, b = 1, c = 1;
//	printf("y.z指向同一内存区域%d\n", add(&a, &c, &c));
//	getchar();
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//main()
//{
//	int X[3][3] = { { 0, 1, 2 }, { 10, 11, 12 }, { 20, 21, 22 } };
//	int i = 2, j = 2;
//	printf("X[i][j]=%d\n", X[i][j]);
//	printf("A选项：*(X[i]+j)=%d\n", *(X[i] + j));
//	printf("B选项：(X+i)[j]=%d\n", (X + i)[j]);
//	printf("C选项：*(X+i+j)=%d\n", *(X + i + j));
//	printf("D选项：*(*(X+i)+j)=%d\n", *(*(X + i) + j));
//	printf("B选项修改后：(*(X+i))[j]=%d\n", (*(X + i))[j]);
//	getchar();
//}

void main()
{
	int a = 5, b = 0, c = 0;
	if (a = b + c) printf("***\n");
	else  printf("$$$\n");
	system("pause");
	return 0;
}