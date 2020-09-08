#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>


class Pokemon
{
public:
	Pokemon() : pokeName(""), pokeNumber(0), pokeType2("") {};
	Pokemon(std::string, int, std::string);
	Pokemon(std::string, int, std::string, std::string);

	std::string getType1() const;
	std::string getType2() const;

	bool commonType(const Pokemon&) const;
	void print() const;
	~Pokemon() {}

private:
	std::string pokeName;
	int pokeNumber;
	std::string pokeType1;
	std::string pokeType2;
};

#endif