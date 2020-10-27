//#include<stdio.h>
//#include<stdlib.h>
//#include"assert.h"
//
//void* my_memmove(void* dest, const void* src, size_t count){
//	assert(dest);
//	assert(src);
//	if (dest < src){
//		while (count--){
//			*(int*)dest = *(int*)src;
//			dest = (int*)dest + 1;
//			src = (int*)src + 1;
//		}	
//	}
//	else{
//		while (count--){
//			*((int*)dest + count) = *((int*)src + count);
//		}
//	}
//}
//int main(){
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr1 + 2, arr1, 20);
//	for (int i = 0; i < 10; i++){
//		printf("%d ", arr1[i]);
//	}
//	system("pause");
//	return 0;
//}