/*
	Taylor, Charlie

	December 6, 2020

	CS A250
	Extra Credit Project
*/

#ifndef SLL_H
#define SLL_H

#include "Node.h"
#include "Node.cpp"

template<typename T>
class SLL
{
	template<typename T>
	friend std::ostream& operator<<(std::ostream& out, const SLL<T>& data);
public:
	//Default Constructor
	SLL() : m_count(0), m_first(nullptr) {}
	//Copy Constructor
	SLL(const SLL<T>& other);
	//Overloaded assignment operator
	SLL<T>& operator=(const SLL<T>& other);
	//Method push to add an element to the front of the list.
	void push(const T& newData);
	//Method pop which removesand returns the element at the front.
	T& pop();
	//Method find which returns true if an element is in the list.
	bool find(const T&) const;

	void destroyList();
	//Destructor
	~SLL();

private:
	Node<T>* m_first;
	int m_count;
};

#endif