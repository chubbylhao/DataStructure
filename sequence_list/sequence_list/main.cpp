#include <iostream>
#include "SeqList.h"

int main()
{
	int a[] = { 4,2,6,8,12,10,14,16,19,18 };
	SeqList<int> L(a, sizeof(a) / a[0]);

	//插入操作
	std::cout << "执行插入操作前数据为：" << std::endl;
	L.PrintList();
	std::cout << "顺序表的长度为：" << L.Length() << std::endl;
	std::cout << "执行插入操作后数据为：" << std::endl;
	L.Insert(6, 11);
	L.PrintList();
	std::cout << "顺序表的长度为：" << L.Length() << std::endl;

	//按值查找操作
	std::cout << "\n值为16的元素位置为：" << L.Locate(16) << std::endl;

	//按位查找操作
	std::cout << "\n位置为3的元素值为：" << L.Get(3) << std::endl;

	//删除操作
	std::cout << "\n执行删除第7个元素操作，删除前数据为：" << std::endl;
	L.PrintList();
	std::cout << "顺序表的长度为：" << L.Length() << std::endl;
	std::cout << "删除后数据为：" << std::endl;
	L.Delete(7);
	L.PrintList();
	std::cout << "顺序表的长度为：" << L.Length() << std::endl;

	return 0;
}

