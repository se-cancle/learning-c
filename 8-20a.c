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
				//switch允许嵌套使用
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
	//	/*printf("星期1\n");
	//	break;*/
	//case 2:
	//	/*printf("星期2\n");
	//	break;*/
	//case 3:
	//	/*printf("星期3\n");
	//	break;*/
	//case 4:
	//	/*printf("星期4\n");
	//	break;*/
	//case 5:
	//	//printf("星期5\n");
	//	printf("weekday\n");
	//	break;
	//case 6:
	//	/*printf("星期6\n");
	//	break;*/
	//case 7:
	//	//printf("星期天\n");
	//	printf("weekend\n");
	//	break;
	//default:
	//	printf("输入错误\n");
	//	break;
	//}
	system("pause");
	return 0;
}