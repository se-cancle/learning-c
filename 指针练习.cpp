#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void yanghui(int n){
	int row= 0;
	int col = 0;
	int arr[20][20] = { 0 };
	for (row = 1; row<= n; row++){
		for (col = 1; col <= row; col++){
			if (col == 1 || col == row){
				arr[row][col] = 1;
			}
			else{
				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
			}printf("%d ", arr[row][col]);
		}printf("\n");
	}
}

int main(){
	
	yanghui(10);

	system("pause");
	return 0;
}

//int main(){
//	int *p, *q, a[5], b[5], i;
//	p = &a[0];
//	q = b;
//	printf("please input array a:\n");
//	for (i = 0; i < 5; i++){
//		scanf("%d", &a[i]);
//	}
//		printf("please input array b:\n");
//		for (i = 0; i < 5; i++){
//			scanf("%d", &b[i]);
//		}
//			printf("array a is:\n");
//			for (i = 0; i < 5; i++){
//				printf("%5d", *(p + i));
//			}	
//			printf("\n");
//				printf("array b is:\n");
//				for (i = 0; i < 5; i++){
//					printf("%5d", *(q + 1));
//				}	
//				printf("\n");
//
//	system("pause");
//	return 0;
//}


//int main(){
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	system("pause");
//	return 0;
//} 