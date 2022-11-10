#include "SeqList.h"
#include <iostream>

template class SeqList<int>;    //实现模板类的声明与定义分离

template<class ElemType>
SeqList<ElemType>::SeqList(ElemType a[], int n) {
	if (n > MaxSize) { throw "欲创建的数组长度超出所允许创建数组的最大长度！"; }
	for (int i = 0; i < n; i++) { data[i] = a[i]; }
	length = n;
}

template<class ElemType>
int SeqList<ElemType>::Length() { return length; }

template<class ElemType>
ElemType SeqList<ElemType>::Get(int i)
{
	if (i < 1 || i > length) { throw "查找位置超出数组外！"; }
	return data[i - 1];
}

template<class ElemType>
int SeqList<ElemType>::Locate(ElemType x)
{
	for (int i = 0; i < length; i++) {
		if (x == data[i]) {
			return i + 1;
		}
	}
	return 0;
}

template<class ElemType>
void SeqList<ElemType>::Insert(int i, ElemType x)
{
	if (length >= MaxSize) { throw "顺序表已满，无法插入！"; }
	if (i < 1 || i > length) { throw "插入位置超出数组外！"; }
	for (int j = length - 1; j >= i - 1; j--) {
		data[j + 1] = data[j];
	}
	data[i - 1] = x;
	length++;
}

template<class ElemType>
ElemType SeqList<ElemType>::Delete(int i)
{
	if (length == 0) { throw "顺序表为空，无法删除！"; }
	if (i < 1 || i > length) { throw "删除位置超出数组外！"; }
	ElemType x = data[i - 1];
	for (int j = i; j < length; j++) {
		data[j - 1] = data[j];
	}
	length--;
	return x;
}

template<class ElemType>
void SeqList<ElemType>::PrintList()
{
	for (int i = 0; i < length; i++) {
		std::cout << data[i] << ' ';
	}
	std::cout << std::endl;
}
