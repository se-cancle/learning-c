//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
#include<stdio.h>
#include<stdlib.h>
int main(){
	int money = 20;
	int total = money;;
	int tmp = money;
	while (tmp > 1){
		total = total + tmp / 2;
		tmp = tmp / 2 + tmp % 2;
	}
	printf("%d", total);
	system("pause");
	return 0;
}