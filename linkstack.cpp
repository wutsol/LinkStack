#include "linkstack.h"
#include <iostream>
using namespace std;

int main()
{
	int e=0,length;
	LinkStack<int> intLinkStack;
	cin >> length;
	for (int i = 0; i < length; i++)
		intLinkStack.Push(i);
	for (int i = 0; i < length; i++)
	{
		intLinkStack.Pop(e);
		cout << e << endl;
	}
	system("pause");
	return 0;
}