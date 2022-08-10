#include "Service.h"
#include <iostream>
#include <vector>


using namespace std;

Service::Service(){

	serviceName = "";
}

vector <Video*> Service::getMovies(){
	return movies;
}

vector <Video*> Service::getSeries(){
	return series;
}

string Service::getServiceName(){
	return serviceName;
}

void Service::setMovies(vector <Video*> _movies){
	movies = _movies;
}

void Service::setSeries(vector <Video*> _series){
	series = _series;
}

void Service::setServiceName(string _serviceName){
	serviceName = _serviceName;
}

void Service::addMovie(Video* vid){
	movies.push_back(vid);
}

void Service::addSerie(Video* vid){
	series.push_back(vid);
}

int Service::getNumOfMovies(){
	return movies.size();
}

int Service::getNumOfSeries(){
	return series.size();
}

string Service::getMovieInfo(){
	string info;
	vector <Video*>::const_iterator i;
	for (i = movies.begin(); i != movies.end(); i++){
		info += "ID: " + (*i) ->getID() + "\n";
		info += "Name: " + (*i) ->getName() + "\n";
		info += "Genre: " + (*i) ->getGenre() + "\n";
		info += "Length: " + (*i) ->getLength() + "\n";
		info += "Rating: " + (*i) ->getRating() + "\n \n";
	}

	return info;
}

string Service::getSerieInfo(){
	string info;
	vector <Video*>::const_iterator i;
	for (i = series.begin(); i != series.end(); i++){
		info += "ID: " + (*i) ->getID() + "\n";
		info += "Name: " + (*i) ->getName() + "\n";
		info += "Genre: " + (*i) ->getGenre() + "\n";
		info += "Length: " + (*i) ->getLength() + "\n";
		info += "Rating: " + (*i) ->getRating() + "\n \n";
	}

	return info;
}

