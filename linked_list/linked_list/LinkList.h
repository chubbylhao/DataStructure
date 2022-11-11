#pragma once

template<class ElemType>
struct Node {
	ElemType data;
	Node<ElemType>* next;
};

template<class ElemType>
class LinkList {
public:
	LinkList();    //建立只有头结点的空单链表
	LinkList(ElemType a[], int n);     //以数组a[]为初始元素值建立单链表
	~LinkList();
	int Length();                      //返回单链表的表长
	ElemType Get(int i);               //按位查找，返回第i个元素的值
	int Locate(ElemType x);			   //按值查找，返回x在单链表中的位置
	void Insert(int i, ElemType x);    //插入x成为第i个元素
	ElemType Delete(int i);            //删除第i个元素
	void PrintList();                  //遍历
private:
	Node<ElemType>* first = new Node<ElemType>;    //头指针
};
