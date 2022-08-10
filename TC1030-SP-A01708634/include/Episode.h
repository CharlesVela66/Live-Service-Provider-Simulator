#include <iostream>
#include "Video.h"
#ifndef EPISODE
#define EPISODE
using namespace std;

class Episode : public Video{
	public:
		Episode(string _ID, string _name, string _genre, int _length, float _rating);
		void displayMessage() override;
		int getNumLength() override ;
		float getNumRating() override ;
};
#endif
