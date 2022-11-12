#pragma once

const int StackSize = 100;

template<class ElemType>
class SharedStack
{
public:
	void Push(int i, ElemType x);    //元素x入i栈
	ElemType Pop(int i);             //栈i出栈并返回出栈元素的值
	ElemType GetTop(int i);          //返回栈顶元素
	int Empty(int i);                //若栈i不为空返回1，为空时返回0
private:
	ElemType data[StackSize];
	int top1 = -1;
	int top2 = StackSize;
};
