/*
	Taylor, Charlie
	Treglia, Andrew
	Nguyen, Brian

	November XX, 2020

	CS A250
	Project 1 (Part A) – Candidate List
*/

#include "CharacterType.h"
#include "CandidateType.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	// test cases
	CandidateType candidate;
	candidate.setCharacterInfo("Charlie", "Taylor", 1337);
	CandidateType cand2;
	cand2.setCharacterInfo("Brian", "Nguyen", 420);
	//candidate.printCandidateInfo();
	cout << "\n";
	//candidate.printCandidateTotalVotes();
	cout << "\n";
	candidate.updateVotesByKingdom(3, 20);
	cout << "Kingdom 3: " << candidate.getVotesByKingdom(3);
	cout << "\n";

	candidate.printCandidateTotalVotes();
	cout << "\n";
	candidate.updateVotesByKingdom(1, 40);
	cout << "\n";

	cout << candidate.getVotesByKingdom(1);
	cout << "\n";
	candidate.updateVotesByKingdom(1, 50);
	candidate.updateVotesByKingdom(1, 50);
	cout << "\n";

	cout << candidate.getVotesByKingdom(1);
	cout << "\n";
	candidate.printCandidateTotalVotes();
	cout  <<  endl;
	cout << candidate.getTotalVotes();

	
	cand2.updateVotesByKingdom(2, 20);
	cout << "\n";
	cand2.printCandidateTotalVotes();
	
	system("Pause");
	return 0;
}