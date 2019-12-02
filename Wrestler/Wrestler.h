//Purpose:		Contains statistical variables for Wrestler.cpp program.
//Input:		Receives wrestling statistics.
//Output:		Shares information with Wrestler.cpp program.

#ifndef OBJECT_H
#define OBJECT_H
class Wrestler
{
private:
	Wrestler();

	//The private members of the Wrestler class
	int weight;
	int grade;
	int takedowns;
	int falls;
	int techFalls;
	int wins;
	int losses;
	int sectionPlace;
	bool stateQualify;
	int statePlace;

	//The wrestler constructor, it has parameters in order to set the private member values
	Wrestler(int grade, int weight, int takedowns, int falls, int techFalls, int wins, int losses, int sectionPlace, bool stateQualify, int statePlace)
	{

	};
};
#endif

