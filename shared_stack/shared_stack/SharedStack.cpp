#include "SharedStack.h"

template class SharedStack<int>;    //ʵ��ģ����������붨�����

template<class ElemType>
void SharedStack<ElemType>::Push(int i, ElemType x)
{
	if (top1 + 1 == top2) {
		throw "����ջ������";
	}
	if (i == 1) {
		top1++;
		data[top1] = x;
	}
	else if (i == 2) {
		top2--;
		data[top2] = x;
	}
	else {
		throw "ֻ��Ϊջ1��ջ2��";
	}
}

template<class ElemType>
ElemType SharedStack<ElemType>::Pop(int i)
{
	if (i == 1) {
		if (top1 == -1) {
			throw "ջ1�ѿգ��޷���ջ��";
		}
		ElemType x = data[top1];
		top1--;
		return x;
	}
	else if (i == 2) {
		if (top2 == StackSize) {
			throw "ջ2�ѿգ��޷���ջ��";
		}
		ElemType x = data[top2];
		top2++;
		return x;
	}
	else {
		throw "ֻ��Ϊջ1��ջ2��";
	}
}

template<class ElemType>
ElemType SharedStack<ElemType>::GetTop(int i)
{
	if (i == 1) {
		if (top1 == -1) {
			throw "ջ1Ϊ�գ�";
		}
		return data[top1];
	}
	else if (i == 2) {
		if (top2 == StackSize) {
			throw "ջ2Ϊ�գ�";
		}
		return data[top2];
	}
	else {
		throw "ֻ��Ϊջ1��ջ2��";
	}
}

template<class ElemType>
int SharedStack<ElemType>::Empty(int i)
{
	if (i == 1) {
		if (top1 == -1) {
			return 1;
		}
		return 0;
	}
	else if (i == 2) {
		if (top2 == StackSize) {
			return 1;
		}
		return 0;
	}
	else {
		throw "ֻ��Ϊջ1��ջ2��";
	}
}
