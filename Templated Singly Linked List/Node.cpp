/*
	Taylor, Charlie

	December 6, 2020

	CS A250
	Extra Credit Project
*/

#include "Node.h"
using namespace std;

template<typename T>
ostream& operator<<(ostream& out, const Node<T>& data)
{
	out << data.getData();
	return out;
}