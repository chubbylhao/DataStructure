#pragma once

template<class ElemType>
struct Node {
	ElemType data;
	Node<ElemType>* next;
};

template<class ElemType>
class LinkList {
public:
	LinkList();    //����ֻ��ͷ���Ŀյ�����
	LinkList(ElemType a[], int n);     //������a[]Ϊ��ʼԪ��ֵ����������
	~LinkList();
	int Length();                      //���ص�����ı�
	ElemType Get(int i);               //��λ���ң����ص�i��Ԫ�ص�ֵ
	int Locate(ElemType x);			   //��ֵ���ң�����x�ڵ������е�λ��
	void Insert(int i, ElemType x);    //����x��Ϊ��i��Ԫ��
	ElemType Delete(int i);            //ɾ����i��Ԫ��
	void PrintList();                  //����
private:
	Node<ElemType>* first = new Node<ElemType>;    //ͷָ��
};
