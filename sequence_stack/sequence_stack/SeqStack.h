#pragma once

const int StackSize = 100;

template<class ElemType>
class SeqStack {
public:
	void Push(ElemType x);    //Ԫ��x��ջ
	ElemType Pop();           //��ջ������ջ��Ԫ�ص�ֵ
	ElemType GetTop();        //����ջ��Ԫ�ص�ֵ
	int Empty();              //ջΪ�շ���1���ǿշ���0
private:
	ElemType data[StackSize];    //���ջԪ�ص�����
	int top = -1;                //ջ����ָ�롱
};
