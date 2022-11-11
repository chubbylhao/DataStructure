#include "LinkList.h"
#include <iostream>

template class LinkList<int>;    //ʵ��ģ����������붨�����

template<class ElemType>
inline LinkList<ElemType>::LinkList()
{
	first->next = NULL;
}

template<class ElemType>
LinkList<ElemType>::LinkList(ElemType a[], int n)
{
	/*ͷ�巨*/
	//first->next = NULL;
	//for (int i = 0; i < n; i++) {
	//	Node<ElemType>* s = new Node<ElemType>;
	//	s->data = a[i];
	//	s->next = first->next;
	//	first->next = s;
	//}

	/*β�巨*/
	Node<ElemType>* rear = new Node<ElemType>;     //βָ��
	rear = first;
	for (int i = 0; i < n; i++) {
		Node<ElemType>* s = new Node<ElemType>;
		s->data = a[i];
		rear->next = s;
		rear = s;
	}
	rear->next = NULL;
}

template<class ElemType>
LinkList<ElemType>::~LinkList()
{
	while (first != NULL) {
		Node<ElemType>* p = first;
		first = first->next;
		delete p;
	}
}

template<class ElemType>
int LinkList<ElemType>::Length()
{	
	Node<ElemType>* p = first->next;
	int count = 0;
	while (p != NULL) {
		count++;
		p = p->next;
	}
	return count;
}

template<class ElemType>
ElemType LinkList<ElemType>::Get(int i)
{
	if (i < 1) { throw "λ�ñ���Ϊ��������"; }
	Node<ElemType>* p = first->next;
	int count = 1;
	while (p != NULL && count < i) {
		p = p->next;
		count++;
	}
	if (p != NULL) {
		return p->data;
	}
	else {
		throw "����λ�ó��������ȣ�";
	}
	return ElemType();
}

template<class ElemType>
int LinkList<ElemType>::Locate(ElemType x)
{
	Node<ElemType>* p = first->next;
	int count = 1;
	while (p != NULL) {
		if (p->data == x) {
			return count;
		}
		p = p->next;
		count++;
	}
	return 0;
}

template<class ElemType>
void LinkList<ElemType>::Insert(int i, ElemType x)
{
	if (i < 1) { throw "λ�ñ���Ϊ��������"; }
	Node<ElemType>* p = first;    //ָ��ͷ���
	int count = 0;                //ͷ����ӦΪ0
	/*���ҵ�i-1�����*/
	while (p != NULL && count < i - 1) {
		p = p->next;
		count++;
	}
	/*�ҵ���i-1�����*/
	if (p != NULL) {
		Node<ElemType>* s = new Node<ElemType>;
		s->data = x;          //�½��������
		s->next = p->next;    //�½��ָ����
		p->next = s;          //������һ������ָ����
	}
	else {
		throw "����λ�ó��������ȣ�";
	}
}

template<class ElemType>
ElemType LinkList<ElemType>::Delete(int i)
{
	/*���ҵ�i-1�����*/
	Node<ElemType>* p = first;
	int count = 0;
	while (p != NULL && count < i - 1) {
		p = p->next;
		count++;
	}
	/*��i-1�����͵�i����㶼����*/
	if (p != NULL && p->next != NULL) {
		Node<ElemType>* q = p->next;
		ElemType x = q->data;
		p->next = q->next;
		delete q;
		return x;
	}
	else {
		throw "�����Ƿ���";
	}
}

template<class ElemType>
void LinkList<ElemType>::PrintList()
{
	Node<ElemType>* p = first->next;
	while (p != NULL) {
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}
