#include <iostream>
#include "SeqList.h"

int main()
{
	int a[] = { 4,2,6,8,12,10,14,16,19,18 };
	SeqList<int> L(a, sizeof(a) / a[0]);
	std::cout << "ִ�в������ǰ����Ϊ��" << std::endl;
	L.PrintList();
	std::cout << "˳���ĳ���Ϊ��" << L.Length();
	return 0;
}

