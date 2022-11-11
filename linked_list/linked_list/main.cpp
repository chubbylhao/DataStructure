#include <iostream>
#include "LinkList.h"

int main() {
	int a[] = { 1,3,5,7,9,11,13,15,17,19 };
	LinkList<int> L(a, sizeof(a) / sizeof(a[0]));
	L.Delete(5);
	L.PrintList();
	return 0;
}
