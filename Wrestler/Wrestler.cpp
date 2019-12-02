//Author:			Taylor Ignaszewski
//Creation Date:	10/22/18
//Modification:		11/6/18
//Date:				11/6/18
//FileName:			Wrestler.cpp
//Purpose:			Contains statistics about a high school wrestler.
//Input:			Gathers wrestling statistics from the regular season.
//Output:			Displays each statistic from wrestler as it is entered.
//Exceptions:		There are none in this program. 



#include "Wrestler.h"
#include <string>
#include <iostream>
#include "wrestlerList.cpp"

using namespace std;

//Declare the boolean variables, if any, for the program.
bool stateQual(int sectionPlace)
{
	bool status = true;
	if (sectionPlace != 1 && sectionPlace != 2)
	{
		status = false;
	}
	return status;
}

//Declare the string variables for the program
string name;

//declare the integer variables for the program
int weight = 0;
int grade = 0;
int takedowns = 0;
int falls = 0;
int techFalls = 0;
int wins = 0;
int losses = 0;
int sectionPlace = 0;
int option = 0;
bool stateQualify;
int statePlace = 0;


//This function will display all of the user stats entered.
void DisplayStats()
{
	cout << "Here are the total regular season stats for the wrestler: " << endl;
	cout << "Wrestler's name: " << name << endl;
	cout << "Weight: " << weight << endl;
	cout << "Grade: " << grade << endl;
	cout << "Takedowns: " << takedowns << endl;
	cout << "Falls: " << falls << endl;
	cout << "Tech Falls: " << techFalls << endl;
	cout << "Wins: " << wins << endl;
	cout << "Losses: " << losses << endl;
	cout << "Section Place: " << sectionPlace << endl;
	cout << "State Place: " << statePlace << endl;
}




int main()
{


		//Print out the menu with its options
		cout << "Menu" << endl;
		cout << "--------------------------------------------- \n" << endl;
		cout << "Welcome to the Wrestler Program!\n" << endl;
		cout << string("Option 1- Enter name of wrestler: ") + "\n" << endl;
		cout << string("Option 2 - Enter the weight class for the wrestler: ") + "\n" << endl;
		cout << string("Option 3- Enter the school grade for the wrestler: ") + "\n" << endl;
		cout << string("Option 4- Enter the stats for the wrestler: ") + "\n" << endl;
		cout << string("Option 5- Enter the wins, losses, and section place: ") + "\n" << endl;
		cout << string("Option 6- Enter the place earned at state: ") + "\n" << endl;
		cout << string("Option 7- Display all season statistics: ") + "\n" << endl;
		cout << string("Option 8- Exit the program") + "\n" << endl;
		cin >> option;




		//Loop until the user decides to exit the program.
		if (option == 1)
		{
			cout << "What is your name?" << endl;
			cin >> name;
			system("pause");
		}

		else if (option == 2)
		{
			cout << "What weight class are you wrestling in? (ex : 152)" << endl;
			cin >> weight;
			system("pause");

		}

		else if (option == 3)
		{
			cout << "What grade are you in school? (7, 8, 9, 10, 11, or 12)" << endl;
			cin >> grade;
			system("pause");

		}

		else if (option == 4)
		{
			cout << "Enter the number of takedowns you have earned. " << endl;
			cin >> takedowns;
			cout << "Enter the number of falls you have earned. " << endl;
			cin >> falls;
			cout << "Enter the number of tech falls you have earned. " << endl;
			cin >> techFalls;
			system("pause");

		}

		else if (option == 5)
		{
			cout << "Enter the number of matches you have won." << endl;
			cin >> wins;
			cout << "Enter the number of matches you have lost." << endl;
			cin >> losses;
			cout << "Enter your place at the section tournament." << endl;
			cin >> sectionPlace;
			if (sectionPlace == 1 || sectionPlace == 2)
			{
				system("cls");
				cout << "Congratulations! You qualified and are going to the state tournament." << endl;
				system("pause");
			}
			else
			{
				system("cls");
				cout << "Sorry. You did not qualify for the state tournament. Better luck next year!" << endl;
				system("pause");
			}
		}

		else if (option == 6)
		{
			cout << "Enter the place you earned at the state tournament (1, 2, 3, 4, 5, or 6)." << endl;
			cin >> statePlace;
			if (statePlace == 1)
			{
				system("cls");
				cout << "Awesome! You are a state champion!" << endl;
				system("pause");
			}
			else if (statePlace > 1 || statePlace < 7)
			{
				system("cls");
				cout << "You placed at the state tournament. This is a great accomplishment!" << endl;
				system("pause");
			}

			else
			{
				system("cls");
				cout << "Invalid entry. You must enter a number between 1 and 7." << endl;
				system("pause");
			}
		}


		else if (option == 7)
		{
			void DisplayStats();
			system("pause");

		}

		else if (option == 8)
		{
			system("cls");
			cout << "Good bye." << endl;
			system("pause");
		}


		else
		{
			system("cls");
			cout << "Invalid entry. Try again please." << endl;
			system("pause");
		}


		return 0;
	
}
	