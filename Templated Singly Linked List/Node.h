/*
	Taylor, Charlie

	December 6, 2020

	CS A250
	Extra Credit Project
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <iomanip>

template<typename T>
class Node
{
	template<typename T>
	friend std::ostream& operator<<(std::ostream& out, const Node<T>& data);
public:
	Node() : m_next(nullptr) {}
	Node(T newData, Node<T>* newNext) : m_data(newData), m_next(newNext){}
	

	Node<T>* getNext() const { return m_next; }
	T getData() const { return m_data; }

    void setData(int theData) { m_data = theData; }
	void setNext(Node<T>* newPtrToNext) { m_next = newPtrToNext; }

	~Node(){}
private:
    T m_data;
	Node<T>* m_next;
};

#endif