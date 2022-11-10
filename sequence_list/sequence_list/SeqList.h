#pragma once

const int MaxSize = 100;    //顺序表的最大容量为100

template<class ElemType>
class SeqList {
public:
	SeqList() { length = 0; }
	SeqList(ElemType a[], int n);
	int Length();              //返回顺序表的表长
	ElemType Get(int i);       //按位查找，返回第i个数据元素的值
	int Locate(ElemType x);    //按值查找，返回x在线性表中的位置
	void Insert(int i, ElemType x);    //插入操作，使x成为第i个数据元素
	ElemType Delete(int i);            //删除操作，删除第i个数据元素
	void PrintList();                  //遍历操作

private:
	int length;    //顺序表的长度
	ElemType data[MaxSize];    //存放ElemType类型的数据元素的数组
};
