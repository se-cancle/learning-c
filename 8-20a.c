#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n = 1;
	int m = 2;
	switch (n){
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n){
				//switch����Ƕ��ʹ��
		case 1:n++;
		case 2:m++;
			   n++;
			   break;
			}
	case 4:m++;
		break;
	default:
		break;	
	}
	printf("m=%d,n=%d\n", m, n);

	//int day = 0;
	//scanf("%d", &day);
	//switch (day){
	//case 1:
	//	/*printf("����1\n");
	//	break;*/
	//case 2:
	//	/*printf("����2\n");
	//	break;*/
	//case 3:
	//	/*printf("����3\n");
	//	break;*/
	//case 4:
	//	/*printf("����4\n");
	//	break;*/
	//case 5:
	//	//printf("����5\n");
	//	printf("weekday\n");
	//	break;
	//case 6:
	//	/*printf("����6\n");
	//	break;*/
	//case 7:
	//	//printf("������\n");
	//	printf("weekend\n");
	//	break;
	//default:
	//	printf("�������\n");
	//	break;
	//}
	system("pause");
	return 0;
}