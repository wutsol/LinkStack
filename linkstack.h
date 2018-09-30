#pragma once
#ifndef LinkStack_h
#define LinkStack_h
#include <iostream>
#define Status int
#define ERROR 0
#define OK 1
#define EMPTY 0
#define NOT_EMPTY 1
template <class T>
struct Node
{
	T data;
	Node<T> *next;
};
template <class T>
class LinkStack
{
private:
	Node<T> *top;
public:
	LinkStack();
	~LinkStack();
	Status Push(T e);//»Î’ª
	Status Pop(T &e);//≥ˆ’ª
	Status GetTop(T &e);
	int StackLength();
	Status IsEmpty();
};
template <class T>
LinkStack<T>::LinkStack()
{
	top = new Node<T>;
	top->next = NULL;
}
template <class T>
LinkStack<T>::~LinkStack()
{
	delete[] top;
}
template <class T>
Status LinkStack<T>::Push(T e)
{
	Node<T> *p = new Node<T>;
	if (!p) return ERROR;
	p->data = e;
	p->next = top->next;
	top->next = p;
	return OK;
}
template <class T>
Status LinkStack<T>::Pop(T &e)
{
	Node<T> *p;
	if (top->next == NULL)
		return EMPTY;
	else
	{
		p = top->next;
		e = p->data;
		top->next = p->next;
		delete p;
		return OK;
	}
}
template <class T>
Status LinkStack<T>::GetTop(T &e)
{
	if (top->next == NULL)
		return EMPTY;
	else
	{
		e = top->next->data;
		return OK;
	}
}
template <class T>
int LinkStack<T>::StackLength()
{
	Node<T> *p = head->next;
	int i = 0;
	while (p)
	{
		i++;
		p = p->next;
	}
	return i;
}
template <class T>
Status LinkStack<T>::IsEmpty()
{
	if (top->next == NULL)
		return EMPTY;
	else
		return NOT_EMPTY;
}
#endif // !LinkStack_h
