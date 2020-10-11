#include<stdio.h>
#include<stdlib.h>

void FindTownum(int arr[], int size, int* num1, int* num2){
	//1.���������ְ�λ���һ��
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum ^= arr[i];
	}
	//��ʱsum��ֵ�͵ȼ���num1^num2�����������һ������ĳ������λΪ1
	//2.��sum�������һ������λΪ1��λ
	int pos = 0;
	for (; pos < 32;pos++){
		if ((sum&(1 << pos)) != 0){
			break;
		}
	}
	//ѭ������֮��pos��ֵ��Ӧ�ı���λ��һ����1
	//3.����posλ�õ�Ԫ����1����0����������ֳ��������֣��ֱ���а�λ���
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < size; i++){
		if ((arr[i] & (1 << pos)) == 0){
			//posλΪ0��һ��
			*num1 ^= arr[i];
		}
		else{
			///posλΪ1��һ��
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