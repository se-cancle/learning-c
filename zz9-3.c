#include<stdio.h>
#include<stdlib.h>

void PrintArr(int arr[3][4]){
	for (int row = 0; row < 3; row++){
		for (int col = 0; col < 4; col++){
			printf("%d ", arr[row][col]);
		}printf("\n");
	}
}
void PrintArr2(int(*p)[4]){
	for (int row = 0; row < 3; row++){
		for (int col = 0; col < 4; col++){
			printf("%d ", p[row][col]);
		}printf("\n");
	}
}
int main(){

	int arr[3][4] = { 0 };
	PrintArr(arr);
	PrintArr2(arr);
	//char str1[] = "hello";
	//str1[0] = 'a';
	//printf("%s\n", str1);

	//char* str2 = "hello";
	//str2[0] = 'a';
	//printf("%s\n", str2);


	/*char arr1[] = "hello";
	char arr2[] = "hello";
	char* arr3 = "hello";
	char* arr4 = "hello";
	if (arr1 == arr2){
		printf("相等\n");
	}
	else{
		printf("不相等\n");
	}

	if (arr3 == arr4){
		printf("相等\n");
	}
	else{
		printf("不相等\n");
	}*/

	system("pause");
	return 0;
}