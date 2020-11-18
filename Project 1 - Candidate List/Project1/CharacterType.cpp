/*
	Taylor, Charlie
	Treglia, Andrew
	Nguyen, Brian

	November XX, 2020

	CS A250
	Project 1 (Part A) – Candidate List
*/

#include "CharacterType.h"

using namespace std;

// Implement all functions in the SAME order
// as listed in the interface file.

void CharacterType::setCharacterInfo(std::string fName, std::string lName, int newID)
{
	firstName = fName;
	lastName = lName;
	id = newID;
}

std::string CharacterType::getFirstName() const
{
	return firstName;
}

std::string CharacterType::getLastName() const
{
	return lastName;
}

int CharacterType::getID() const
{
	return id;
}

void CharacterType::printName() const
{
	cout << lastName << ", " << firstName;
}

void CharacterType::printCharacterInfo() const
{
	cout << "ID# " << id << firstName << lastName;
}

void CharacterType::printID() const
{
	cout << "ID# " << id;
}
