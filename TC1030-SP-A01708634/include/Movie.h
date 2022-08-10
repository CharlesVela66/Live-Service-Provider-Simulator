#include <iostream>
#include "Video.h"
#ifndef MOVIE
#define MOVIE

using namespace std;

class Movie: public Video{
	public:
		Movie(string _ID, string _name, string _genre, int _length, float _rating);
		void displayMessage() override;
};

#endif
