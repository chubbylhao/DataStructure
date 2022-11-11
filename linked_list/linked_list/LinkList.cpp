#include "LinkList.h"
#include <iostream>

template class LinkList<int>;    //实现模板类的声明与定义分离

template<class ElemType>
inline LinkList<ElemType>::LinkList()
{
	first->next = NULL;
}

template<class ElemType>
LinkList<ElemType>::LinkList(ElemType a[], int n)
{
	/*头插法*/
	//first->next = NULL;
	//for (int i = 0; i < n; i++) {
	//	Node<ElemType>* s = new Node<ElemType>;
	//	s->data = a[i];
	//	s->next = first->next;
	//	first->next = s;
	//}

	/*尾插法*/
	Node<ElemType>* rear = new Node<ElemType>;     //尾指针
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
	if (i < 1) { throw "位置必须为正整数！"; }
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
		throw "查找位置超出链表长度！";
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
	if (i < 1) { throw "位置必须为正整数！"; }
	Node<ElemType>* p = first;    //指向头结点
	int count = 0;                //头结点对应为0
	/*查找第i-1个结点*/
	while (p != NULL && count < i - 1) {
		p = p->next;
		count++;
	}
	/*找到第i-1个结点*/
	if (p != NULL) {
		Node<ElemType>* s = new Node<ElemType>;
		s->data = x;          //新结点数据域
		s->next = p->next;    //新结点指针域
		p->next = s;          //更改上一个结点的指针域
	}
	else {
		throw "插入位置超出链表长度！";
	}
}

template<class ElemType>
ElemType LinkList<ElemType>::Delete(int i)
{
	/*查找第i-1个结点*/
	Node<ElemType>* p = first;
	int count = 0;
	while (p != NULL && count < i - 1) {
		p = p->next;
		count++;
	}
	/*第i-1个结点和第i个结点都存在*/
	if (p != NULL && p->next != NULL) {
		Node<ElemType>* q = p->next;
		ElemType x = q->data;
		p->next = q->next;
		delete q;
		return x;
	}
	else {
		throw "参数非法！";
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
