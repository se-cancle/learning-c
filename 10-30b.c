#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//евазЪж
int main(){
	char muder = 'A';
	for (muder = 'A'; muder <= "D"; muder++){
		if ((muder != 'A') + (muder == 'C') + (muder == 'D') + (muder != 'D') == 3){
			printf("muder is %c\n", muder);
		}
	}
	system("pause");
	return 0;
}