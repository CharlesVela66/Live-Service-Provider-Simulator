#include "Episode.h"
#include "Video.h"
#include <iostream>
#include <vector>
#ifndef SEASON
#define SEASON

using namespace std;

class Season : public Video{
	private:
		vector <Video*> episodes;
	public:
		Season();
		Season(string _ID, string _name, string _genre, int _length, float _rating);
		int getNumLength() override;
		float getNumRating() override;
		void addEpisode(Episode*);
		int getNumOfEpisodes();
		vector <Video*> getEpisodes();
		string getEpisodeInfo();
		void displayMessage() override;
		void setEpisodes(vector <Video*>);
};

#endif
