#ifndef a06HEADER_H
#define a06HEADER_H

#include <string>

using namespace std;

const int fedSize = 10;

struct FedMember {
	string names;
	string homeStars;
	string distances;
};

int loadData(FedMember federation[]);
void addMember(FedMember federation[], int memberCount);
void displayMembers(FedMember federation[], int memberCount);
void search(FedMember federation[], int memberCount);
void sort(FedMember federation[], int memberCount);
void writeData(FedMember federation[], int memberCount);

#endif
