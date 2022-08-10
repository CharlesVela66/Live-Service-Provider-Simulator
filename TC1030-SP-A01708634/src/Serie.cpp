#include "Serie.h"
#include "Video.h"
#include "Episode.h"
#include <iostream>
#include <vector>
using namespace std;
using namespace std;

Serie::Serie(){
	ID = "";
	name = "";
	genre = "";
	length = 0;
	rating = 0;

}

Serie::Serie(string _ID, string _name, string _genre, int _length, float _rating){
	ID = _ID;
	name = _name;
	genre = _genre;
	length = _length;
	rating = _rating;
}

int Serie::getNumLength(){
	int total = 0;
	vector <Video*>::const_iterator i;
	for (i = seasons.begin(); i != seasons.end(); i++){
		total+= (*i) ->getNumLength();

	}
	return total;
}

float Serie::getNumRating(){
	float total = 0.0;
	float size = (float) seasons.size();;
	vector <Video*>::const_iterator i;
	for (i = seasons.begin(); i != seasons.end(); i++){
		total+= (*i) ->getNumRating();

	}
	total = total / size;
	return total;
}

int Serie::getNumOfSeasons(){
	return seasons.size();
}

vector <Video*> Serie::getSeasons(){
	return seasons;
}

void Serie::addSeason(Season* s){
	seasons.push_back(s);
}

string Serie::getSeasonInfo(){
	string info;
	vector <Video*>::const_iterator i;
	for (i = seasons.begin(); i != seasons.end(); i++){
		info += "ID: " + (*i) ->getID() + "\n";
		info += "Name: " + (*i) ->getName() + "\n";
		info += "Genre: " + (*i) ->getGenre() + "\n";
		info += "Length: " + (*i) ->getLength() + "\n";
		info += "Rating: " + (*i) ->getRating() + "\n \n";

	}

	return info;
}

void Serie:: displayMessage(){
	cout << "You are watching a serie!" << endl;
}
void Serie::setSeasons(vector <Video*> _seasons){
	seasons = _seasons;
}

Serie Serie::operator +(Serie s2){
	Serie s3;
	s3.length = this->length + s2.length;
	s3.rating = (this->rating + s2.rating) / 2;
	return s3;
}
