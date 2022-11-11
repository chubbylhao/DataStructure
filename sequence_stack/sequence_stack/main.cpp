#include <iostream>
#include "SeqStack.h"

int main() {
	SeqStack<int> S;
	if (S.Empty()) {
		std::cout << "栈为空！" << std::endl;
	}
	S.Push(11);
	S.Push(22);
	S.Push(33);
	std::cout << "此时栈顶元素为：" << S.GetTop() << std::endl;
	S.Pop();
	S.Pop();
	std::cout << "弹出一个元素后的栈顶元素是：" << S.GetTop() << std::endl;
	return 0;
}
