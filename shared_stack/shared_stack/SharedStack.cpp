#include "SharedStack.h"

template class SharedStack<int>;    //实现模板类的声明与定义分离

template<class ElemType>
void SharedStack<ElemType>::Push(int i, ElemType x)
{
	if (top1 + 1 == top2) {
		throw "共享栈已满！";
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
		throw "只能为栈1或栈2！";
	}
}

template<class ElemType>
ElemType SharedStack<ElemType>::Pop(int i)
{
	if (i == 1) {
		if (top1 == -1) {
			throw "栈1已空，无法出栈！";
		}
		ElemType x = data[top1];
		top1--;
		return x;
	}
	else if (i == 2) {
		if (top2 == StackSize) {
			throw "栈2已空，无法出栈！";
		}
		ElemType x = data[top2];
		top2++;
		return x;
	}
	else {
		throw "只能为栈1或栈2！";
	}
}

template<class ElemType>
ElemType SharedStack<ElemType>::GetTop(int i)
{
	if (i == 1) {
		if (top1 == -1) {
			throw "栈1为空！";
		}
		return data[top1];
	}
	else if (i == 2) {
		if (top2 == StackSize) {
			throw "栈2为空！";
		}
		return data[top2];
	}
	else {
		throw "只能为栈1或栈2！";
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
		throw "只能为栈1或栈2！";
	}
}
