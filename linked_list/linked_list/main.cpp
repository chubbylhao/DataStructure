#include <iostream>
#include "LinkList.h"

int main() {
	int a[] = { 1,3,5,7,9,11,13,15,17,19 };
	LinkList<int> L(a, sizeof(a) / sizeof(a[0]));

	std::cout << "��ʼ����Ԫ��Ϊ��" << std::endl;
	L.PrintList();
	std::cout << "��ʼ�����Ϊ:" << L.Length() << std::endl;

	std::cout << "\n��4��Ԫ�ص�ֵΪ��" << L.Get(4) << std::endl;

	std::cout << "\n9�������е�λ��Ϊ��" << L.Locate(9) << std::endl;

	std::cout << "\n����100��Ϊ��6��Ԫ�أ�" << std::endl;
	L.Insert(6, 100);
	L.PrintList();

	std::cout << "ɾ����8��Ԫ�أ�" << std::endl;
	L.Delete(8);
	L.PrintList();

	return 0;
}
