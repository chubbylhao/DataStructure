#include <iostream>
#include "SeqList.h"

int main()
{
	int a[] = { 4,2,6,8,12,10,14,16,19,18 };
	SeqList<int> L(a, sizeof(a) / a[0]);
	std::cout << "执行插入操作前数据为：" << std::endl;
	L.PrintList();
	std::cout << "顺序表的长度为：" << L.Length();
	return 0;
}

