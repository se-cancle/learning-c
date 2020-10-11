#include<stdio.h>
#include<stdlib.h>

void FindTownum(int arr[], int size, int* num1, int* num2){
	//1.把所有数字按位异或到一起
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum ^= arr[i];
	}
	//此时sum的值就等价于num1^num2，这个整数中一定存在某个比特位为1
	//2.从sum中随便找一个比特位为1的位
	int pos = 0;
	for (; pos < 32;pos++){
		if ((sum&(1 << pos)) != 0){
			break;
		}
	}
	//循环结束之后，pos的值对应的比特位就一定是1
	//3.按照pos位置的元素是1还是0把整个数组分成两个部分，分别进行按位异或
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++){
		if ((arr[i] & (1 << pos)) == 0){
			//pos位为0的一组
			*num1 ^= arr[i];
		}
		else{
			///pos位为1的一组
			*num2 ^= arr[i];
		}
	}


}


int main(){
	int arr[] = { 1, 1, 2, 2, 3, 4, 4, 7 };
	int num1 = 0;
	int num2 = 0;
	FindTownum(arr, 8, &num1, &num2);
	printf("%d,%d\n", num1, num2);

	system("pause");
	return 0;
}