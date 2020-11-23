/*
	Taylor, Charlie
	Treglia, Andrew
	Nguyen, Brian

	November 23, 2020

	CS A250
	Project 1 (Part A) – Candidate List
*/

#ifndef CHARACTERTYPE_H
#define CHARACTERTYPE_H

#include <iostream>
#include <string>

class CharacterType
{
public:
	// Default constructor
	CharacterType() : id(0) {}
	// Overloaded constructor
	CharacterType(const std::string& fName, const std::string& lName, int idNum) : firstName(fName), lastName(lName), id(idNum) {}
	// setCharacterInfo
	void setCharacterInfo(const std::string& fName, const std::string& lName, int newID);
	// getFirstName
	std::string getFirstName() const;
	// getLastName
	std::string getLastName() const;
	// getID
	int getID() const;

	// printName
	void printName() const;
	// printCharacterInfo
	void printCharacterInfo() const;
	// printID
	void printID() const;
	// Destructor
	~CharacterType() {}

private:
	std::string firstName;
	std::string lastName;
	int id;
};

#endif

