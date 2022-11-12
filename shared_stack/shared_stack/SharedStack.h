#pragma once

const int StackSize = 100;

template<class ElemType>
class SharedStack
{
public:
	void Push(int i, ElemType x);    //Ԫ��x��iջ
	ElemType Pop(int i);             //ջi��ջ�����س�ջԪ�ص�ֵ
	ElemType GetTop(int i);          //����ջ��Ԫ��
	int Empty(int i);                //��ջi��Ϊ�շ���1��Ϊ��ʱ����0
private:
	ElemType data[StackSize];
	int top1 = -1;
	int top2 = StackSize;
};
