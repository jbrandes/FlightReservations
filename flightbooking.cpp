#include <iostream>
#include <string>

using namespace std; 


int seat() {

char answer[10];

	cout << "Would you like a window or aisle seat?" << endl;
	cin >> answer;
		if (answer == "window") {
			cout << "Your seat is 15A";
		} else  {
			cout << "Your seat is 13C";
                }
};

int main() {

char destination[20];
char origin[20];
char month[10];
int date;
char answer[10];
int number;
char airline[10];

cout << "Welcome to the travel program." << endl;

cout << "What is your destination?" << endl;
cin >> destination;

cout << "What is your point of origin?" << endl;
cin >> origin;

cout << "What month would you like to leave?"<< endl;
cin >> month; 
cout << "What day would you like to depart?"<< endl;
cin >> date;

cout << "What airline would you like to fly?" << endl; 
cin >> airline;

cout << "There are three flights going to " << destination << " on " << month << " " << date << " from " << "" << origin << " on " << airline << " Airlines" << endl;

cout << "To choose Flight F266 non-stop at 1 p.m. press 1" << endl;
cout << "To choose Flight G777 leaving at 4 p.m. with a stop in Germany press 2" << endl;
cout << "To Choose Flight L879 leaving at 8 p.m. non-stop press 3" << endl;
cin >> number;

if (number == 1){

	seat();
} else if (number == 2) {
	seat();
} else {
	seat();
} 
return 0;
};
