#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main () {
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL){
		perror("fopen");
		return 1;
	}
	//写文件
	fputc('a', pf);
	fputc('b', pf);
	fputc('c', pf);


	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;

system("pause");
return 0;
}