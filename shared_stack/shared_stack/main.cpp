#include <iostream>
#include "SharedStack.h"

int main()
{
	SharedStack<int> S;
	S.Push(1, 1);
	S.Push(1, 3);
	S.Push(2, 2);
	S.Push(2, 4);
	if (~S.Empty(1)) {
		std::cout << "栈1不为空！" << std::endl;
	}
	std::cout << "取出栈1的顶部元素：" << S.GetTop(1) << std::endl;
	std::cout << "取出栈2的顶部元素：" << S.GetTop(2) << std::endl;
	S.Pop(1);
	std::cout << "栈1出栈1次后的顶部元素为：" << S.GetTop(1) << std::endl;
	S.Pop(2);
	std::cout << "栈1出栈1次后的顶部元素为：" << S.GetTop(2) << std::endl;

	return 0;
}
