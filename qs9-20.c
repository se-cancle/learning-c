//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Water(int money){
	int total = money;
	int tmp = money;
	while (tmp > 1){
		total = total + tmp / 2;//原来钱买的水+空瓶兑换的水
		tmp = tmp / 2+ tmp % 2;//空瓶兑换的汽水+剩余的空瓶
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
