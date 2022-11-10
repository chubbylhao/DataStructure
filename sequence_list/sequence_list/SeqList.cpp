#include "SeqList.h"
#include <iostream>

template class SeqList<int>;    //ʵ��ģ����������붨�����

template<class ElemType>
SeqList<ElemType>::SeqList(ElemType a[], int n) {
	if (n > MaxSize) { throw "�����������鳤�ȳ������������������󳤶ȣ�"; }
	for (int i = 0; i < n; i++) { data[i] = a[i]; }
	length = n;
}

template<class ElemType>
int SeqList<ElemType>::Length() { return length; }

template<class ElemType>
ElemType SeqList<ElemType>::Get(int i)
{
	if (i < 1 || i > length) { throw "����λ�ó��������⣡"; }
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
	if (length >= MaxSize) { throw "˳����������޷����룡"; }
	if (i < 1 || i > length) { throw "����λ�ó��������⣡"; }
	for (int j = length - 1; j >= i - 1; j--) {
		data[j + 1] = data[j];
	}
	data[i - 1] = x;
	length++;
}

template<class ElemType>
ElemType SeqList<ElemType>::Delete(int i)
{
	if (length == 0) { throw "˳���Ϊ�գ��޷�ɾ����"; }
	if (i < 1 || i > length) { throw "ɾ��λ�ó��������⣡"; }
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
