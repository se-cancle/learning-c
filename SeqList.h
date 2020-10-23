
typedef int DataType;
typedef struct seqList
{
	DataType* _array;
	//unsigned int _size;
	//元素个数
	size_t _size;
	//容量：当前可用空间
	size_t _capacity;
	//	unsigned int _capacity;

}seqList;
void seqListInit(seqList* s1);

//pushBack:尾插
void seqListPushBack(seqList* s1, DataType value);

//popBack:尾删
void seqListPopBack(seqList* s1);

//PushFront：头插
void seqListPushFront(seqList* s1, DataType value);

//popFront:头删
void seqListPopFront(seqList* s1);


//在pos位置前面插入一个数据value
void seqListInsert(seqList* s1, size_t pos, DataType value);

//删除pos位置数据
void seqListErase(seqList* s1, DataType value);


//顺序表查找
int seqlistFind(seqList* s1, DataType value);

//顺序表打印
void seqListPrint(seqList* s1);