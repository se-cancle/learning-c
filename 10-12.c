
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//int main(){
//	  int c;
//		FILE * fp = fopen("G:\learn c�Լ���ϰ\10-12", "r");
//		if (!fp){
//			perror("File opening failed");
//			return EXIT_FAILURE;
//		}while ((c = fgetc(fp)) != EOF){
//			putchar(c);
//		}
//		if (ferror(fp)){
//			puts("I/O error when reading");
//		}
//		else if (feof(fp)){
//			puts("End of file reached successfully");//�ɹ������ļ�����
//		}
//		/*if (fp == NULL){
//			printf("���ļ�ʧ��!\n");
//			fclose(fp);
//		}*/
//		fclose(fp);
//
//	system("pause");
//	return 0;
//}



enum{SIZE=5};
int main(){
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE* fp = open("G:\learn c�Լ���ϰ\10 - 12", "wb");
	fwrite(a, sizeof(*a), SIZE, fp);
	fclose(fp);

	fp = fopen("G:\learn c�Լ���ϰ\10 - 12", "rb");
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1){
		printf("%1f\n", b);
	}
	if (feof(fp)){
		printf("Error reading learn c�Լ���ϰ:unexpected end of file\n");
	}
	else if (ferror(fp)){
		perror("Error reading learn c�Լ���ϰ");
	}
	fclose(fp);
	system("pause");
	return 0;
}