#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++){
		arr[i]=i;
	}
	system("pause");
	return 0;
}

//��ӡ���������Ƶ�����λ��ż��λ
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 31; i >= 1; i -= 2){
//		printf("%d ",(n>>i)&1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2){
//		printf("%d ", (n >> i)&1);
//	}
//	system("pause");
//	return 0;
//}


//����int����M��n�Ķ����Ʊ��ʽ�У��ж��ٸ�λ��bit)��ͬ
//int Bit_diff(int m, int n){
//	int i = 0;
//	int count = 0;
//	int tmp = m^n;
//	while (tmp){
//		tmp = tmp&(tmp - 1);
//	/*for (i = 0; i < 32; i++){
//		
//		if ((tmp & (1 << i)) != 0) { */// tmp & (1 << i) ���ȼ����� ������
//			count++;
//		}
//	return count;
//	}
//int main(){
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = Bit_diff(m, n);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}