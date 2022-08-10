#include <iostream>
#ifndef VIDEO
#define VIDEO


using namespace std;

class Video {
	protected:
		string ID, name, genre;
		int length;
		float rating;
	public:
		Video();
		virtual void displayMessage() = 0;
		string getID();
		string getName();
		string getGenre();
		string getLength();
		string getRating();
		virtual int getNumLength();
		virtual float getNumRating();
		void setID(string _ID);
		void setName(string _name);
		void setGenre(string _genre);
		void setLength(int _length) ;
		void setRating(float _rating) ;
};

#endif
