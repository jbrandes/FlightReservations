
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std; 

char destination[20];
char origin[20];
char month[10];
int date;

int number;
char airline[10];
int returndate;
int reservation();



int main() {



cout << "Welcome to the travel program." << endl;

cout << "What is your destination?" << endl;
cin >> destination;

cout << "What is your point of origin?" << endl;
cin >> origin;

cout << "What month would you like to leave?"<< endl;
cin >> month; 
cout << "What day would you like to depart?"<< endl;
cin >> date;
cout << "What day would you like to return?"<< endl;
cin >> returndate;

cout << "What airline would you like to fly?" << endl; 
cin >> airline;

cout << "There are three flights going to " << destination << " on " << month << " " << date << " from " << "" << origin << " on " << airline << " Airlines" << endl;

cout << "To choose Flight F266 non-stop at 1 p.m. press 1" << endl;
cout << "To choose Flight G777 leaving at 4 p.m. with a layover press 2" << endl;
cout << "To Choose Flight L879 leaving at 8 p.m. non-stop press 3" << endl;
cin >> number;


if (number == 1){

	reservation();
} else if (number == 2) {
	reservation();
} else {
	reservation();
	
return 0;
}
}




int reservation() {
    int Seat;
    int compGuess;
    char answer[10];
   
    
    if (rand()%2) {
        char Seat = (rand()%('F'-'A')) + 'A';
    
    int compGuess = rand()%30 + 1;
    
	cout << "Would you like a window or aisle seat?" << endl;
	cin >> answer;
		if (answer == "window") {
			cout << "Your seat is: " << Seat << compGuess << endl;
		} else  {
			cout << "Your seat is: " << Seat << compGuess << endl;
                }
    }
}
