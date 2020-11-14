#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main () {
		int n=0;
		scanf("%d",&n);
		for (int i = 0; i < n; i++){
			for (int j = 0; j <= 2*n-1; j++){
				if (i == j ||( i + j ==( n*2-2))){
					printf("v");
				}
				else{
					printf(" ");
				}
			} printf("\n");
		}

	system("pause");
return 0;
}