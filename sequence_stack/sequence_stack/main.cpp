#include <iostream>
#include "SeqStack.h"

int main() {
	SeqStack<int> S;
	if (S.Empty()) {
		std::cout << "ջΪ�գ�" << std::endl;
	}
	S.Push(11);
	S.Push(22);
	S.Push(33);
	std::cout << "��ʱջ��Ԫ��Ϊ��" << S.GetTop() << std::endl;
	S.Pop();
	S.Pop();
	std::cout << "����һ��Ԫ�غ��ջ��Ԫ���ǣ�" << S.GetTop() << std::endl;
	return 0;
}
