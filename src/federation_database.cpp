/***************************
Programmed by: Adam La Fleur
Project 8: Program to give
users a choice of addding
members, displaying members,
searching, and sorting an
array.
Date: 6/7/2016
Source: None
***************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "fed_member.h"

FedMember federation[fedSize];

int main()
{
	int memberCount;
	int choice;
	cout << "Welcome to the StarFleet Database." << endl;
	memberCount = loadData(federation);
	while (1)
	{
		if (memberCount >= 10)
		{
			displayMembers(federation, memberCount);
			cout << "The StarFleet Database is full. Shutting Down." << endl;
			system("pause");
			return 0;
		}
		else
		{
			cout << endl << endl;
			cout << "*******    Menu     ********" << endl;
			cout << "--Current Member Count: " << memberCount << "---" << endl;
			cout << "------Selections Below------" << endl;
			cout << "1) Add a Member" << endl;
			cout << "2) Delete a Member" << endl;
			cout << "3) Display Members" << endl;
			cout << "4) Search For a Member" << endl;
			cout << "5) Sort by Name" << endl;
			cout << "6) Load to Output File" << endl;
			cout << "7) Exit" << endl;
			cout << "Enter your choice (1,2,3,4,5, or 6): ";

			cin >> choice;

			switch (choice) 
			{
			case 1:
				addMember(federation, memberCount);
				memberCount++;
				break;
			case 2:
				break;
			case 3:
				displayMembers(federation, memberCount);
				break;
			case 4:
				search(federation, memberCount);
				break;
			case 5:
				sort(federation, memberCount);
				break;
			case 6:
				writeData(federation, memberCount);
				break;
			case 7:
				system("pause");
				return 0;
			default: 
				break;
			}
		}
	}
}
