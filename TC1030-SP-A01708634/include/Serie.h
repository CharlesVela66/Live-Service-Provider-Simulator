#include "Video.h"
#include "Season.h"
#include "Episode.h"
#include <iostream>
#include <vector>
#ifndef SERIE
#define SERIE


using namespace std;

class Serie: public Video{
	private:
		vector<Video*> seasons;
	public:
		Serie();
		Serie(string _ID, string _name, string _genre, int _length, float _rating);
		int getNumLength() override;
		float getNumRating() override;
		int getNumOfSeasons();
		vector<Video*> getSeasons();
		void addSeason(Season*);
		string getSeasonInfo();
		void displayMessage() override;
		void setSeasons(vector<Video*>);
		Serie operator+(Serie s);

};

#endif
