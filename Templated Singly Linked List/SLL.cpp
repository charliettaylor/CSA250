/*
	Taylor, Charlie

	December 6, 2020

	CS A250
	Extra Credit Project
*/

#include "SLL.h"

using namespace std;

template<typename T>
ostream& operator<<(ostream& out, const SLL<T>& other)
{
	Node<T>* ptr = other.m_first;
	while (ptr != nullptr)
	{
		out << ptr->getData() << " ";
		ptr = ptr->getNext();
	}
	out << "\n";
	return out;
}

//copy constructor
template<typename T>
SLL<T>::SLL(const SLL<T>& other)
{
	m_count = other.m_count;
	m_first = new Node<T>(other.m_first->getData(), nullptr);
	Node<T>* copy = m_first;
	Node<T>* otherList = other.m_first->getNext();
	while (otherList != nullptr)
	{
		copy->setNext(new Node<T>(otherList->getData(), nullptr));
		copy = copy->getNext();
		otherList = otherList->getNext();
	}
}

template<typename T>
SLL<T>& SLL<T>::operator=(const SLL<T>& other)
{
	if (&other != this)
	{
		destroyList();
		m_count = other.m_count;
		m_first = new Node<T>(other.m_first->getData(), nullptr);
		Node<T>* copy = m_first;
		Node<T>* otherList = other.m_first->getNext();
		while (otherList != nullptr)
		{
			copy->setNext(new Node<T>(otherList->getData(), nullptr));
			copy = copy->getNext();
			otherList = otherList->getNext();
		}
	}
	else
	{
		cerr << "Attempted to copy itself.";
	}
	return *this;
}

template<typename T>
void SLL<T>::push(const T& newData)
{
	m_first = new Node<T>(newData, m_first);
	++m_count;
}


template<typename T>
T& SLL<T>::pop()
{
	if (m_first != nullptr)
	{
		T temp = m_first->getData();
		Node<T>* ptr = m_first;
		m_first = m_first->getNext();
		delete ptr;
		ptr = nullptr;
		--m_count;
		return temp;
	}
	else
	{
		cerr << "List is empty!";
	}
}

template<typename T>
bool SLL<T>::find(const T& target) const
{
	if (m_first == nullptr)
	{
		cerr << "List is empty!";
	}
	else
	{
		Node<T>* find = m_first;
		while (find != nullptr)
		{
			if (find->getData() == target)
			{
				return true;
			}
			find = find->getNext();
		}
		return false;
	}
}

template<typename T>
void SLL<T>::destroyList()
{
	if (m_first != nullptr)
	{
		Node<T>* temp = m_first;
		while (temp != nullptr)
		{
			m_first = m_first->getNext();
			delete temp;
			temp = m_first;
		}
		m_first, temp = nullptr;
		m_count = 0;
	}
}

template<typename T>
SLL<T>::~SLL()
{
	destroyList();
}