#include "Episode.h"
#include <iostream>

using namespace std;

Episode::Episode(string _ID, string _name, string _genre, int _length, float _rating){
	ID = _ID;
	name = _name;
	genre = _genre;
	length = _length;
	rating = _rating;
}

void Episode::displayMessage(){
	cout << "You are watching an episode from a series!" << endl;
}

int Episode::getNumLength(){
	int total = length;
	return total;
}

float Episode::getNumRating(){
	float total = rating;
	return total;
}
