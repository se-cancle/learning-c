#include<stdio.h>
#include<stdlib.h>
void new_line(){
	printf("hehe\n");
}
void three_line(){
	int i = 0;
	for (i = 0; i < 3; i++){
		new_line();
	}
}
int main(){
	three_line();
	system("pause");
	return 0;
}