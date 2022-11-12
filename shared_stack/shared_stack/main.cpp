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
		std::cout << "ջ1��Ϊ�գ�" << std::endl;
	}
	std::cout << "ȡ��ջ1�Ķ���Ԫ�أ�" << S.GetTop(1) << std::endl;
	std::cout << "ȡ��ջ2�Ķ���Ԫ�أ�" << S.GetTop(2) << std::endl;
	S.Pop(1);
	std::cout << "ջ1��ջ1�κ�Ķ���Ԫ��Ϊ��" << S.GetTop(1) << std::endl;
	S.Pop(2);
	std::cout << "ջ1��ջ1�κ�Ķ���Ԫ��Ϊ��" << S.GetTop(2) << std::endl;

	return 0;
}
