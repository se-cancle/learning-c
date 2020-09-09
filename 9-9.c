#include<stdio.h>
#include<stdlib.h>
void GuseeBank(){
	int a,b,c,d,e;
	for (a = 1; a <= 5; a++){
		for (b = 1; b <= 5; b++){
			for (c = 1; c <= 5; c++){
				for (d = 1; d <= 5; d++){
					for (e = 1; e <= 5; e++){
						if ((b == 2) + (a == 3) == 1 &&
							(b == 2) + (e == 4) == 1 &&
							(c == 1) + (d == 2) == 1 &&
							(c == 5) + (d == 3) == 1 &&
							(e == 4) + (a == 1) == 1){
							if (a*b*c*d*e==120){
								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
							}
							
						}
					}
				}
			}
		}
	}
}

int main(){
	GuseeBank();

	system("pause");
	return 0;
}

//void Yanghui(int n){
//	int arr[20][20] = { 0 };
//	int row = 0;
//	int col = 0;
//	for (row = 1; row <= n; row++){
//		for (col = 1; col <= row; col++){
//			if (col == 1 || col == row){
//				arr[row][col] = 1;
//			}
//			else{
//				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
//			}printf("%d ", arr[row][col]);
//		}printf("\n");
//	}
//}
//int main(){
//	Yanghui(10);
//	system("pause");
//	return 0;
//}

//
//void FindMurder(){
//	//char muder;
//	for (char muder = 'A'; muder <= 'D'; muder++){
//		if ((muder != 'A') + (muder == 'C') + (muder == 'D') + (muder != 'D') == 3){
//			printf("Ð×ÊÖ¾ÍÊÇ%c\n", muder);
//		}
//	}
//}
//int main(){
//	FindMurder();
//	system("pause");
//	return 0;
//}