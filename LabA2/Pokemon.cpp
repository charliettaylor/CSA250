#include "Pokemon.h"

using namespace std;


Pokemon::Pokemon(string newName, int newNumber, string newType1)
{
	pokeName = newName;
	pokeNumber = newNumber;
	pokeType1 = newType1;
}

Pokemon::Pokemon(string newName, int newNumber, string newType1,
	string newType2)
{
	pokeName = newName;
	pokeNumber = newNumber;
	pokeType1 = newType1;
	pokeType2 = newType2;
}

string Pokemon::getType1() const
{
	return pokeType1;
}

string Pokemon::getType2() const
{
	return pokeType2;
}

bool Pokemon::commonType(const Pokemon& poke2) const
{
	if (pokeType1 == poke2.getType1() 
		|| pokeType1 == poke2.getType2()
		|| pokeType2 == poke2.getType1()
		|| (pokeType2 == poke2.getType2() && pokeType2 != ""))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Pokemon::print() const
{
	cout << pokeName << " : " << pokeType1 << " " << pokeType2;
}