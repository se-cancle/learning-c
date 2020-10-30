//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
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