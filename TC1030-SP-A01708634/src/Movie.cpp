#include "Movie.h"
#include <iostream>

using namespace std;

Movie::Movie(string _ID, string _name, string _genre, int _length, float _rating){
	ID = _ID;
	name = _name;
	genre = _genre;
	length = _length;
	rating = _rating;
}

void Movie::displayMessage(){
	cout << "You are watching a movie!" << endl;
}


