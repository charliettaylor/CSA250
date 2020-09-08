#include "Pokemon.h"

#include <string>
#include <iostream>

using namespace std;

void test(const Pokemon& pokemon1, const Pokemon& pokemon2);

int main(void)
{
	Pokemon bulbasaur("Bulbasaur", 1, "Grass", "Poison");
	Pokemon ivysaur("Ivysaur", 2, "Grass", "Poison");
	Pokemon charmander("Charmander", 4, "Fire");
	Pokemon arbok("Arbok", 24, "Poison");
	Pokemon nidoking("Nidoking", 34, "Poison", "Ground");
	Pokemon volpix("Volpix", 37, "Fire");
	Pokemon tentacruel("Tentacruel", 73, "Water", "Poison");

	test(bulbasaur, ivysaur);
	test(bulbasaur, charmander);
	test(bulbasaur, arbok);
	test(bulbasaur, nidoking);
	test(bulbasaur, volpix);
	test(bulbasaur, tentacruel);
	test(charmander, arbok);
	test(charmander, volpix);
	test(charmander, tentacruel);
	test(arbok, tentacruel);

	cout << endl;
	system("Pause");
	return 0;
}

void test(const Pokemon& pokemon1, const Pokemon& pokemon2)
{
	pokemon1.print();
	cout << endl;
	pokemon2.print();
	cout << "\n    Common type? "
		<< ((pokemon1.commonType(pokemon2)) ? "Yes" : "No");
	cout << "\n------------------------------\n";
}