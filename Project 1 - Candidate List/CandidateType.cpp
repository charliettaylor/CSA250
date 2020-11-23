/*
	Taylor, Charlie
	Treglia, Andrew
	Nguyen, Brian

	November 23, 2020

	CS A250
	Project 1 (Part A) – Candidate List
*/

#include "CandidateType.h"

using namespace std;

// Implement all functions in the SAME order
// as listed in the interface file. 

// Copy constructor

CandidateType::CandidateType() : CharacterType(), totalVotes(0),
numOfKingdoms(NUM_OF_KINGDOMS), kingdomVotes(new int[NUM_OF_KINGDOMS])
{
	for (int i = 0; i < numOfKingdoms; ++i)
	{
		kingdomVotes[i] = 0;
	}
}

CandidateType::CandidateType(const CandidateType& other) 
{	
	CharacterType::setCharacterInfo(other.getFirstName(), other.getLastName(),
									other.getID());

	numOfKingdoms = other.numOfKingdoms;
	totalVotes = other.totalVotes;
	kingdomVotes = new int[numOfKingdoms];

	for (int i = 0; i < numOfKingdoms; ++i)
		kingdomVotes[i] = other.kingdomVotes[i];
}

// Copy assignment operator
CandidateType& CandidateType::operator=(const CandidateType& rightSide) 
{
	if (&rightSide != this)
	{
		CharacterType::setCharacterInfo(rightSide.getFirstName(),
			rightSide.getLastName(), rightSide.getID());
		if (numOfKingdoms != rightSide.numOfKingdoms)
		{
			delete [] kingdomVotes;
			kingdomVotes = new int [rightSide.numOfKingdoms];
			numOfKingdoms = rightSide.numOfKingdoms;
		}

		for (int i = 0; i < numOfKingdoms; ++i)
		{
			kingdomVotes[i] = rightSide.kingdomVotes[i];
		}
	}
	else
	{
		cerr << "attempted assignment to itself";
	}
	return *this;
}

void CandidateType::updateVotesByKingdom(int idx, int amountKingdomVotes)
{
	kingdomVotes[idx] = amountKingdomVotes;
	totalVotes = 0;
	for(int i = 0; i < numOfKingdoms; ++i)
	{
		totalVotes += kingdomVotes[i];
	}
}

// getTotalVotes
int CandidateType::getTotalVotes() const
{
	return totalVotes;
}

// getVotesByKingdom
int CandidateType::getVotesByKingdom(int idx) const 
{
	return kingdomVotes[idx];
}

void CandidateType::printCandidateInfo() const
{
	CharacterType::printID();
	cout << " - ";
	CharacterType::printName();
}

void CandidateType::printCandidateTotalVotes() const 
{
	CharacterType::printName();
	cout << "\n=>Total Votes (all kingdoms): " << totalVotes;
}

// Destructor
CandidateType::~CandidateType() 
{
	delete [] kingdomVotes; //delete the array
	kingdomVotes = nullptr;
}
