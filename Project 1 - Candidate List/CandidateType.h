/*
	Taylor, Charlie
	Treglia, Andrew
	Nguyen, Brian

	November 23, 2020

	CS A250
	Project 1 (Part A) – Candidate List
*/

#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "CharacterType.h"

const int NUM_OF_KINGDOMS = 7;	// this is the capacity of the array
const std::string KINGDOMS[] = {
	"The North",
	"The Vale",
	"The Stormlands",
	"The Reach",
	"The Westerlands",
	"The Iron Islands",
	"Dorne"
};

class CandidateType	: public CharacterType
{
public:
	// Default constructor
	CandidateType();
	// Copy constructor
	CandidateType(const CandidateType& other);

	// Copy assignment operator
	CandidateType& operator=(const CandidateType& rightSide);
	
	// update kingdom votes 
	void updateVotesByKingdom(int idx, int amountKingdomVotes);

	// getTotalVotes
	int getTotalVotes() const;
	// getVotesByKingdom
	int getVotesByKingdom(int idx) const;

	// printCandidateInfo
	void printCandidateInfo() const;
	// printCandidateTotalVotes
	void printCandidateTotalVotes() const;

	// Destructor
	~CandidateType();

private:
	int totalVotes;
	int numOfKingdoms;
	int *kingdomVotes;
};

#endif
