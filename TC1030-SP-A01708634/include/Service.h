#include <iostream>
#include <vector>
#include "Video.h"

#ifndef SERVICE
#define SERVICE

using namespace std;

class Service{
	private:
		vector <Video*> movies;
		vector <Video*> series;
		string serviceName; // i.e. Netflix, Disney Plus, HBO, etc.
	public:
		Service();
		vector <Video*> getMovies();
		vector <Video*> getSeries();
		string getServiceName();
		void setMovies(vector <Video*>);
		void setSeries(vector <Video*>);
		void setServiceName(string _serviceName);
		void addMovie(Video*);
		void addSerie(Video*);
		int getNumOfMovies();
		int getNumOfSeries();
		string getMovieInfo();
		string getSerieInfo();

};
#endif
