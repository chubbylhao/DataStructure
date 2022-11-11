#pragma once

const int StackSize = 100;

template<class ElemType>
class SeqStack {
public:
	void Push(ElemType x);    //元素x入栈
	ElemType Pop();           //出栈并返回栈顶元素的值
	ElemType GetTop();        //返回栈顶元素的值
	int Empty();              //栈为空返回1，非空返回0
private:
	ElemType data[StackSize];    //存放栈元素的数组
	int top = -1;                //栈顶“指针”
};
