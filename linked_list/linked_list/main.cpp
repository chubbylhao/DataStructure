#include <iostream>
#include "LinkList.h"

int main() {
	int a[] = { 1,3,5,7,9,11,13,15,17,19 };
	LinkList<int> L(a, sizeof(a) / sizeof(a[0]));

	std::cout << "初始链表元素为：" << std::endl;
	L.PrintList();
	std::cout << "初始链表表长为:" << L.Length() << std::endl;

	std::cout << "\n第4个元素的值为：" << L.Get(4) << std::endl;

	std::cout << "\n9在链表中的位置为：" << L.Locate(9) << std::endl;

	std::cout << "\n插入100成为第6个元素：" << std::endl;
	L.Insert(6, 100);
	L.PrintList();

	std::cout << "删除第8个元素：" << std::endl;
	L.Delete(8);
	L.PrintList();

	return 0;
}
