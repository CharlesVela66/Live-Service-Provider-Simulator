#include "Season.h"
#include "Video.h"
#include "Episode.h"
#include <iostream>
#include <vector>
using namespace std;

Season::Season(){
	ID = "";
	name = "";
	genre = "";
	length = 0;
	rating = 0;
}

Season::Season(string _ID, string _name, string _genre, int _length, float _rating){
	ID = _ID;
	name = _name;
	genre = _genre;
	length = _length;
	rating = _rating;
}

int Season::getNumLength(){
	int total = 0;
	vector <Video*>::const_iterator i;
	for (i = episodes.begin(); i != episodes.end(); i++){
		total+= (*i) ->getNumLength();

	}
	return total;
}

float Season::getNumRating(){
	float total = 0.0;
	float size = (float) episodes.size();;
	vector <Video*>::const_iterator i;
	for (i = episodes.begin(); i != episodes.end(); i++){
		total+= (*i) ->getNumRating();

	}
	total = total / size;
	return total;
}


void Season::addEpisode(Episode * e){
	episodes.push_back(e);
}

vector <Video*> Season::getEpisodes(){
	return episodes;
}

int Season::getNumOfEpisodes(){
	return episodes.size();
}

string Season::getEpisodeInfo(){
	string info;
	vector <Video*>::const_iterator i;
	for (i = episodes.begin(); i != episodes.end(); i++){
		info += "ID: " + (*i) ->getID() + "\n";
		info += "Name: " + (*i) ->getName() + "\n";
		info += "Genre: " + (*i) ->getGenre() + "\n";
		info += "Length: " + (*i) ->getLength() + "\n";
		info += "Rating: " + (*i) ->getRating() + "\n \n";
	}

	return info;
}

void Season::displayMessage(){
	cout << "You are watching a season from a series!" << endl;
}


void Season::setEpisodes(vector <Video*> _episodes){
	episodes = _episodes;
}

