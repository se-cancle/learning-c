//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Water(int money){
	int total = money;
	int tmp = money;
	while (tmp > 1){
		total = total + tmp / 2;//ԭ��Ǯ���ˮ+��ƿ�һ���ˮ
		tmp = tmp / 2+ tmp % 2;//��ƿ�һ�����ˮ+ʣ��Ŀ�ƿ
	}
	return total;
}
int main(){
	int money = 0;
	scanf("%d", &money);
	int ret = Water(money);
	printf("%d", ret);
	system("pause");
	return 0;
}
