#pragma once

const int MaxSize = 100;    //˳�����������Ϊ100

template<class ElemType>
class SeqList {
public:
	SeqList() { length = 0; }
	SeqList(ElemType a[], int n);
	int Length();              //����˳���ı�
	ElemType Get(int i);       //��λ���ң����ص�i������Ԫ�ص�ֵ
	int Locate(ElemType x);    //��ֵ���ң�����x�����Ա��е�λ��
	void Insert(int i, ElemType x);    //���������ʹx��Ϊ��i������Ԫ��
	ElemType Delete(int i);            //ɾ��������ɾ����i������Ԫ��
	void PrintList();                  //��������

private:
	int length;    //˳���ĳ���
	ElemType data[MaxSize];    //���ElemType���͵�����Ԫ�ص�����
};
