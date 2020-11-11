#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main () {
	int n = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (int i = 1; i <= n; i++){
		scanf("%d", &arr[i]);

		for (int j = 1; j < i; j++){
			if (arr[i] == arr[j]){
				--i;
				--n;
			}
		}
	}
	for (i = 1; i <= n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
system("pause");
return 0;
}