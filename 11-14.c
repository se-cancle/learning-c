#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main () {
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL){
		perror("fopen");
		return 1;
	}
	//д�ļ�
	fputc('a', pf);
	fputc('b', pf);
	fputc('c', pf);


	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;

system("pause");
return 0;
}