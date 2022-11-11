#include "SeqStack.h"

template class SeqStack<int>;    //ʵ��ģ����������붨�����

template<class ElemType>
void SeqStack<ElemType>::Push(ElemType x)
{
	if (top == StackSize - 1) {
		throw "˳��ջ�������޷�������ջ��";
	}
	top++;
	data[top] = x;
}

template<class ElemType>
ElemType SeqStack<ElemType>::Pop()
{
	if (top == -1) {
		throw "˳��ջ�ѿգ��޷�������ջ��";
	}
	ElemType x = data[top];
	top--;
	return x;
}

template<class ElemType>
ElemType SeqStack<ElemType>::GetTop()
{
	if (top == -1) {
		throw "˳��ջΪ�գ�������ջ��Ԫ�أ�";
	}
	return data[top];
}

template<class ElemType>
int SeqStack<ElemType>::Empty()
{
	if (top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}
