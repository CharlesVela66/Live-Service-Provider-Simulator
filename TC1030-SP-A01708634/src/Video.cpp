#include "Video.h"
#include <iostream>

using namespace std;

Video::Video(){
	ID = "";
	name = "";
	genre = "";
	length = 0;
	rating = 0.0;
}

string Video::getID(){
	return ID;
}

string Video::getName(){
	return name;
}

string Video::getGenre(){
	return genre;
}

string Video::getLength(){
	string s = to_string(length);
	return s;
}


string Video::getRating(){
	string s = to_string(rating);
	return s;
}

int Video::getNumLength(){
	return length;
}

float Video::getNumRating(){
	return rating;
}

void Video::setID(string _ID){
	ID = _ID;
}

void Video::setName(string _name){
	name = _name;
}

void Video::setGenre(string _genre){
	genre = _genre;
}

void Video::setLength(int _length){
	length = _length;
}

void Video::setRating(float _rating){
	rating = _rating;
}

void Video::displayMessage(){
	cout << "You are watching a video!" << endl;
}

