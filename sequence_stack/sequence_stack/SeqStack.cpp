#include "SeqStack.h"

template class SeqStack<int>;    //实现模板类的声明与定义分离

template<class ElemType>
void SeqStack<ElemType>::Push(ElemType x)
{
	if (top == StackSize - 1) {
		throw "顺序栈已满，无法继续入栈！";
	}
	top++;
	data[top] = x;
}

template<class ElemType>
ElemType SeqStack<ElemType>::Pop()
{
	if (top == -1) {
		throw "顺序栈已空，无法继续出栈！";
	}
	ElemType x = data[top];
	top--;
	return x;
}

template<class ElemType>
ElemType SeqStack<ElemType>::GetTop()
{
	if (top == -1) {
		throw "顺序栈为空，不存在栈顶元素！";
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
