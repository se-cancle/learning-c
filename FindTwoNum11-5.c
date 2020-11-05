//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void find_tow_num(int arr[], int sz, int* num1, int* num2){
//	//把所有数字按位异或(^),得到num1^num2
//	int num = 0;
//	for (int i = 0; i < sz; i++){
//		num ^= arr[i];
//	}
//		
//	//找到num中为比特位为1的位
//	int pos = 0;
//	for (pos=0; pos < 32; pos++){
//		if ((num&(1 << pos)) != 0){
//			break;
//		}
//	}
//	*num1 = 0;
//	*num2 = 0;
//	//按照pos位是0还是1将整个数组分成两个部分，进行异或
//	for (int i = 0; i < sz; i++){
//		if (arr[i] & (1 << pos) == 0){
//			 *num1 ^= arr[i];//pos位为0的一组
//		}
//		else{
//			 *num2 ^= arr[i];//pos位为1的一组
//		}
//	}
//}
//	
//int main(){
//	int arr[] = {1,1,2,2,3,4,4,5,5,6};
//	int num1 = 0;
//	int num2 = 0;
//	find_tow_num(arr, 10, &num1, &num2);
//	printf("num1=%d,num2=%d\n", num1, num2);
//	return 0;
//}
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FindTwoNum(int arr[], int size, int* num1, int* num2){
	//首先找到数组中出现一次的两个数
	int ret = 0;
	for (int i = 0; i < size; i++){
		ret ^= arr[i];
	}

	//找到一个为1 的二进制位
	int pos = 0;//pos 位置就是二进制位1 的位置
	for (int pos = 0; pos < 32; pos++){
		if ((ret &(1 << pos)) != 0){
			break;
		}
	}

	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++){
		if (arr[i] & (1 << pos) == 1) {
			//根据pos位置分为1
			*num1 ^= arr[i];
		}
		else {
			//根据pos位置分为0
			*num2 ^= arr[i];
		}
	}
}
int main(){
	int num1 = 0;
	int num2 = 0;
	int arr[] = { 1,1,2,2,3,4,4,5,5,6};
	//int size = sizeof(arr) / sizeof(arr[0]);
	FindTwoNum(arr, 10, &num1, &num2);
	printf("两个数字分别是： num1=%d num2=%d\n", num1, num2);
	system("pause");
	return 0;
}