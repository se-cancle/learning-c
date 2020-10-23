
typedef int DataType;
typedef struct seqList
{
	DataType* _array;
	//unsigned int _size;
	//Ԫ�ظ���
	size_t _size;
	//��������ǰ���ÿռ�
	size_t _capacity;
	//	unsigned int _capacity;

}seqList;
void seqListInit(seqList* s1);

//pushBack:β��
void seqListPushBack(seqList* s1, DataType value);

//popBack:βɾ
void seqListPopBack(seqList* s1);

//PushFront��ͷ��
void seqListPushFront(seqList* s1, DataType value);

//popFront:ͷɾ
void seqListPopFront(seqList* s1);


//��posλ��ǰ�����һ������value
void seqListInsert(seqList* s1, size_t pos, DataType value);

//ɾ��posλ������
void seqListErase(seqList* s1, DataType value);


//˳������
int seqlistFind(seqList* s1, DataType value);

//˳����ӡ
void seqListPrint(seqList* s1);