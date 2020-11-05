//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void find_tow_num(int arr[], int sz, int* num1, int* num2){
//	//���������ְ�λ���(^),�õ�num1^num2
//	int num = 0;
//	for (int i = 0; i < sz; i++){
//		num ^= arr[i];
//	}
//		
//	//�ҵ�num��Ϊ����λΪ1��λ
//	int pos = 0;
//	for (pos=0; pos < 32; pos++){
//		if ((num&(1 << pos)) != 0){
//			break;
//		}
//	}
//	*num1 = 0;
//	*num2 = 0;
//	//����posλ��0����1����������ֳ��������֣��������
//	for (int i = 0; i < sz; i++){
//		if (arr[i] & (1 << pos) == 0){
//			 *num1 ^= arr[i];//posλΪ0��һ��
//		}
//		else{
//			 *num2 ^= arr[i];//posλΪ1��һ��
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
	//�����ҵ������г���һ�ε�������
	int ret = 0;
	for (int i = 0; i < size; i++){
		ret ^= arr[i];
	}

	//�ҵ�һ��Ϊ1 �Ķ�����λ
	int pos = 0;//pos λ�þ��Ƕ�����λ1 ��λ��
	for (int pos = 0; pos < 32; pos++){
		if ((ret &(1 << pos)) != 0){
			break;
		}
	}

	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++){
		if (arr[i] & (1 << pos) == 1) {
			//����posλ�÷�Ϊ1
			*num1 ^= arr[i];
		}
		else {
			//����posλ�÷�Ϊ0
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
	printf("�������ֱַ��ǣ� num1=%d num2=%d\n", num1, num2);
	system("pause");
	return 0;
}