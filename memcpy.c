//#include<stdio.h>
//#include<stdlib.h>
//#include"assert.h"
//void* my_memcpy(void* dest, void* src, size_t count){
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	while (count--){
//		*(int*)dest = *(int*)src;
//		dest = (int*)dest + 1;
//		src = (int*)src + 1;
//	}
//	return ret;
//}
//int main(){
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	for (int i = 0; i < 10; i++){
//		printf("%d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}