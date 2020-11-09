#include<stdio.h>
#include<stdlib.h>
//int main(){
//	//动态开辟内存
//	int *p = malloc(175 * sizeof(int));
//	if (*p == NULL){
//		perror("malloc");
//	}
//	else{
//		for (int i = 0; i < 25; i++){
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 25; i++){
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main(){
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL){
//		perror("calloc");
//	}
//	else{
//		for (int i = 0; i < 10; i++){
//			printf("%d ", *(p + i));
//		}	
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main(){
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL){
//		perror("malloc");
//		return 0;
//	}
//	for (int i = 0; i < 10; i++){
//		p[i] = i + 1;
//	}
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));//扩容
//	if (ptr == NULL){
//		perror("realloc");
//	}
//	else{
//		p = ptr;
//		ptr = NULL;
//	}
//	for (int i = 0; i < 20; i++){
//		p[i] = i + 1;
//	}
//	for (int i = 0; i < 20; i++){
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//void *GetMemory(void){
//	char p[] = "hello world";
//	return p;
//}
//void Test(void){
//	char *str = NULL;
//	str=GetMemory();
//	printf("str");
//}


void test(void){
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL){
		strcpy(str, "world");
		printf(str);
	}
}