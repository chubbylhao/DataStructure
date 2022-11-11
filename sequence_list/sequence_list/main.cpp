#include <iostream>
#include "SeqList.h"

int main()
{
	int a[] = { 4,2,6,8,12,10,14,16,19,18 };
	SeqList<int> L(a, sizeof(a) / a[0]);

	//�������
	std::cout << "ִ�в������ǰ����Ϊ��" << std::endl;
	L.PrintList();
	std::cout << "˳���ĳ���Ϊ��" << L.Length() << std::endl;
	std::cout << "ִ�в������������Ϊ��" << std::endl;
	L.Insert(6, 11);
	L.PrintList();
	std::cout << "˳���ĳ���Ϊ��" << L.Length() << std::endl;

	//��ֵ���Ҳ���
	std::cout << "\nֵΪ16��Ԫ��λ��Ϊ��" << L.Locate(16) << std::endl;

	//��λ���Ҳ���
	std::cout << "\nλ��Ϊ3��Ԫ��ֵΪ��" << L.Get(3) << std::endl;

	//ɾ������
	std::cout << "\nִ��ɾ����7��Ԫ�ز�����ɾ��ǰ����Ϊ��" << std::endl;
	L.PrintList();
	std::cout << "˳���ĳ���Ϊ��" << L.Length() << std::endl;
	std::cout << "ɾ��������Ϊ��" << std::endl;
	L.Delete(7);
	L.PrintList();
	std::cout << "˳���ĳ���Ϊ��" << L.Length() << std::endl;

	return 0;
}

