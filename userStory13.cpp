/********************************************************************
** Author: Team 28
** Date: 2-26-20
** Description: Displays list of bank branch locations when prompted
** by user.
*********************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;


int main()
{ //open main

	int userChoice; //declare variables for user input & account info
	
//use while loop to get user input and perform input validation
	userChoice = 0;

	cout << endl << "Would you like to view bank locations in your area?" << endl;
	cout << "1: Yes" << endl;
	cout << "2: No" << endl;
	cin >> userChoice;

	while (!(userChoice == 1 || userChoice == 2))
	{ //open input validation while loop
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "That is not a valid selection. Please enter 1 or 2." << endl;
		cout << endl << "1: Yes" << endl;
		cout << "2: No" << endl;
		cin >> userChoice;
		userChoice = ((int)userChoice / 1);
	} //close input validation while loop
	cin.ignore(1000, '\n');

	cout << endl;

// Declaring Vector of String type
	vector<string> location; 
	
// Initialize vector with strings using push_back command
	location.push_back("100 Main St., Portland, OR"); 
	location.push_back("50 Happy St., Portland, OR"); 
	location.push_back("27 Random Ln., Portland, OR"); 
	location.push_back("357 Danger Zone, Portland, OR"); 
	 
// Print Strings stored in Vector
	for (int i = 0; i < location.size(); i++) 
		cout << location[i] << "\n"; 

	cout << "Press Enter to exit.";
	cin.get();

	return 0;
} //close main

