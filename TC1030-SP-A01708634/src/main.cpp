#include "Video.h"
#include "Service.h"
#include "Serie.h"
#include "Movie.h"
#include "Episode.h"
#include "Season.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
	// We create the variable cont that will be useful to determine the lifecycle of our menu
	bool cont = true;
	// Here we will store all of the movies and series for each service
	vector <Video*> netflixMovies;
	vector <Video*> netflixSeries;
	vector <Video*> disneyMovies;
	vector <Video*> disneySeries;
	vector <Video*> hboMovies;
	vector <Video*> hboSeries;

	// First we'll create the movies since it's easier because there is no seasons nor episodes to them
	// We add them directly to the movies vector
	netflixMovies.push_back(new Movie("tt11286314", "Don't Look Up", "Comedy & Drama", 138 ,7.2));
	netflixMovies.push_back(new Movie("tt8721424", "Tick Tick Boom", "Musical", 120 ,7.5));
	netflixMovies.push_back(new Movie("tt7653254", "Marriage Story", "Drama", 137 ,7.9));
	netflixMovies.push_back(new Movie("tt2463208", "The Adam Project", "Science Fiction", 106 ,6.7));
	netflixMovies.push_back(new Movie("tt10521092", "The Forgotten Battle", "Suspense", 124 ,7.1));

	// Now for the series, we will first start with the creation of an episode, then a season and then the series
	Serie ST;
	Season s1ST;

	// This is the part where we use the season method to interact with the episode class to create episodes and
	// store them in a vector
	s1ST.addEpisode(new Episode("tt4593118", "Chapter One: The Vanishing of Will Byers", "Drama", 49, 8.5));
	s1ST.addEpisode(new Episode("tt4593122", "Chapter Two: The Weirdo on Maple Street", "Drama", 56, 8.4));
	s1ST.addEpisode(new Episode("tt4593126", "Chapter Three: Holly, Jolly", "Drama", 52, 8.8));
	s1ST.addEpisode(new Episode("tt4593124", "Chapter Four: The Body", "Drama", 51, 8.9));
	s1ST.addEpisode(new Episode("tt4593128", "Chapter Five: The Flea and the Acrobat", "Drama", 53, 8.7));
	s1ST.addEpisode(new Episode("tt4593132", "Chapter Six: The Monster", "Drama", 47, 8.8));
	s1ST.addEpisode(new Episode("tt4593134", "Chapter Seven: The Bathub", "Drama", 42, 9.0));
	s1ST.addEpisode(new Episode("tt4593138", "Chapter Eight: The Upside Down", "Drama", 55, 9.3));

	// We give the respective data for the season in particular
	s1ST.setID("tt4574334");
	s1ST.setName("Season 1");
	s1ST.setGenre("Drama");
	s1ST.setLength(s1ST.getNumLength()); //We use this function to get the length of each episode and sum them
	s1ST.setRating(s1ST.getNumRating()); // We use this function to get the rating of each episode and average them

	ST.addSeason(new Season(s1ST)); // We add the season into our seasons vector inside our Serie object

	Season s2ST;
	s2ST.addEpisode(new Episode("tt6020684", "Chapter One: MADMAX", "Drama", 48, 8.2));
	s2ST.addEpisode(new Episode("tt6020792", "Chapter Two: Trick or Treat, Freak", "Drama", 56, 8.3));
	s2ST.addEpisode(new Episode("tt6020796", "Chapter Three: The Pollywog", "Drama", 51, 8.5));
	s2ST.addEpisode(new Episode("tt6020802", "Chapter Four: Will the Wise", "Drama", 46, 8.6));
	s2ST.addEpisode(new Episode("tt6020806", "Chapter Five: Dig Dug", "Drama", 58, 8.8));
	s2ST.addEpisode(new Episode("tt6020808", "Chapter Six: The Spy", "Drama", 51, 9.1));
	s2ST.addEpisode(new Episode("tt6020810", "Chapter Seven: The Lost Sister", "Drama", 45, 6.1));
	s2ST.addEpisode(new Episode("tt6020812", "Chapter Eight: The Mind Flayer", "Drama", 47, 9.2));
	s2ST.addEpisode(new Episode("tt6020876", "Chapter Nine: The Gate", "Drama", 62, 9.3));

	s2ST.setID("tt4574334");
	s2ST.setName("Season 2");
	s2ST.setGenre("Drama");
	s2ST.setLength(s2ST.getNumLength());
	s2ST.setRating(s2ST.getNumRating());

	ST.addSeason(new Season(s2ST));

	Season s3ST;
	s3ST.addEpisode(new Episode("tt7445494", "Chapter Two: The Mall Rats", "Drama", 50, 7.8));
	s3ST.addEpisode(new Episode("tt7640050", "Chapter Two: Trick or Treat, Freak", "Drama", 50, 7.9));
	s3ST.addEpisode(new Episode("tt7911866", "Chapter Three: The Case of the Missing Lifeguard", "Drama", 49, 8.3));
	s3ST.addEpisode(new Episode("tt7911884", "Chapter Four: The Sauna Test", "Drama", 52, 8.9));
	s3ST.addEpisode(new Episode("tt7911894", "Chapter Five: The Flayed", "Drama", 51, 8.5));
	s3ST.addEpisode(new Episode("tt7911914", "Chapter Six: E Pluribus Unum", "Drama", 59, 8.6));
	s3ST.addEpisode(new Episode("tt7911930", "Chapter Seven: The Bite", "Drama", 55, 8.7));
	s3ST.addEpisode(new Episode("tt7911942", "Chapter Eight: The Battle of Starcourt", "Drama", 76, 9.2));

	s3ST.setID("tt4574334");
	s3ST.setName("Season 3");
	s3ST.setGenre("Drama");
	s3ST.setLength(s3ST.getNumLength());
	s3ST.setRating(s3ST.getNumRating());

	ST.addSeason(new Season(s3ST));

	Season s4ST;
	s4ST.addEpisode(new Episode("tt11043488", "Chapter One: The Hellfire Club", "Drama", 78, 8.1));
	s4ST.addEpisode(new Episode("tt11171932", "Chapter Two: Vecna's Curse", "Drama", 77, 8.2));
	s4ST.addEpisode(new Episode("tt11171954", "Chapter Three: The Monster and the Superhero", "Drama", 63, 8.5));
	s4ST.addEpisode(new Episode("tt11171978", "Chapter Four: Dear Billy", "Drama", 78, 9.5));
	s4ST.addEpisode(new Episode("tt11172000", "Chapter Five: The Nina Project", "Drama", 76, 8.3));
	s4ST.addEpisode(new Episode("tt11172012", "Chapter Six: The Dive", "Drama", 75, 8.7));
	s4ST.addEpisode(new Episode("tt11172022", "Chapter Seven: The Massacre at Hawkins Lab", "Drama", 98, 9.7));

	s4ST.setID("tt4574334");
	s4ST.setName("Season 4");
	s4ST.setGenre("Drama");
	s4ST.setLength(s4ST.getNumLength());
	s4ST.setRating(s4ST.getNumRating());

	ST.addSeason(new Season(s4ST));

	ST.setName("Stranger Things") ;
	ST.setID("tt4574334");
	ST.setGenre("Drama");
	ST.setLength(ST.getNumLength());
	ST.setRating(ST.getNumRating());


	netflixSeries.push_back(new Serie(ST)); // We add it to the vector of series

	Serie QG;
	Season s1QG;

	s1QG.addEpisode(new Episode("tt10062310", "Openings", "Drama", 59, 8.4));
	s1QG.addEpisode(new Episode("tt10062312", "Exchanges", "Drama", 65, 8.7));
	s1QG.addEpisode(new Episode("tt10062314", "Doubled Pawns", "Drama", 46, 8.4));
	s1QG.addEpisode(new Episode("tt10062318", "Middle Game", "Drama", 49, 8.4));
	s1QG.addEpisode(new Episode("tt10062320", "Fork", "Drama", 59, 8.2));
	s1QG.addEpisode(new Episode("tt10062322", "Adjournment", "Drama", 60, 8.4));
	s1QG.addEpisode(new Episode("tt12984026", "End Game", "Drama", 68, 9.2));


	s1QG.setID("tt10048342");
	s1QG.setName("Season 1");
	s1QG.setGenre("Drama");
	s1QG.setLength(s1QG.getNumLength());
	s1QG.setRating(s1QG.getNumRating());

	QG.addSeason(new Season(s1QG));

	QG.setName("The Queen's Gambit");
	QG.setID("tt10048342");
	QG.setGenre("Drama");
	QG.setLength(QG.getNumLength());
	QG.setRating(QG.getNumRating());

	netflixSeries.push_back(new Serie(QG));

	// We create the variable service to store both movies and series from the particular service
	Service netflix;
	netflix.setMovies(netflixMovies);
	netflix.setSeries(netflixSeries);

	// Now we proceed to do the same procedure with the Disney Movies and Series
	disneyMovies.push_back(new Movie("tt0120915", "Star Wars Episode I: The Phantom Menace", "Science Fiction", 136, 6.5));
	disneyMovies.push_back(new Movie("tt0121765", "Star Wars Episode II: Attack of The Clones", "Science Fiction", 142, 6.6));
	disneyMovies.push_back(new Movie("tt0121766", "Star Wars Episode III: Revenge of The Sith", "Science Fiction", 140, 7.6));
	disneyMovies.push_back(new Movie("tt0076759", "Star Wars Episode IV: A New Hope", "Science Fiction", 121, 8.6));
	disneyMovies.push_back(new Movie("tt0080684", "Star Wars Episode V: The Empire Strikes Back", "Science Fiction", 124, 8.7));
	disneyMovies.push_back(new Movie("tt0086190", "Star Wars Episode VI: The Return of The Jedi", "Science Fiction", 131, 8.3));

	Serie TM;
	Season s1TM;

	s1TM.addEpisode(new Episode("tt9095424", "Chapter 1: The Mandalorian", "Science Fiction", 39, 8.6));
	s1TM.addEpisode(new Episode("tt9121530", "Chapter 2: The Child", "Science Fiction", 31, 8.5));
	s1TM.addEpisode(new Episode("tt9121534", "Chapter 3: The Sinn", "Science Fiction", 37, 9.0));
	s1TM.addEpisode(new Episode("tt9121536", "Chapter 4: Sanctuary", "Science Fiction", 41, 7.7));
	s1TM.addEpisode(new Episode("tt9121538", "Chapter 5: The Gunslinger", "Science Fiction", 35, 7.5));
	s1TM.addEpisode(new Episode("tt9121542", "Chapter 6: The Prisoner", "Science Fiction", 43, 8.3));
	s1TM.addEpisode(new Episode("tt9121544", "Chapter 7: The Reckoning", "Science Fiction", 41, 9.0));
	s1TM.addEpisode(new Episode("tt9121546", "Chapter 8: Redemption", "Science Fiction", 48, 9.2));

	s1TM.setID("tt8111088");
	s1TM.setName("Season 1");
	s1TM.setGenre("Science Fiction");
	s1TM.setLength(s1TM.getNumLength());
	s1TM.setRating(s1TM.getNumRating());

	TM.addSeason(new Season(s1TM));

	Season s2TM;

	s2TM.addEpisode(new Episode("tt11150494", "Chapter 9: The Marshal", "Science Fiction", 52, 8.8));
	s2TM.addEpisode(new Episode("tt12981670", "Chapter 10: The Passenger", "Science Fiction", 40, 7.8));
	s2TM.addEpisode(new Episode("tt12981672", "Chapter 11: The Heiress", "Science Fiction", 35, 8.7));
	s2TM.addEpisode(new Episode("tt12981674", "Chapter 12: The Siege", "Science Fiction", 37, 8.3));
	s2TM.addEpisode(new Episode("tt13052856", "Chapter 13: The Jedi", "Science Fiction", 45, 9.4));
	s2TM.addEpisode(new Episode("tt13052868", "Chapter 14: The Tragedy", "Science Fiction", 32, 9.1));
	s2TM.addEpisode(new Episode("tt13052876", "Chapter 15: The Believer", "Science Fiction", 38, 8.9));
	s2TM.addEpisode(new Episode("tt13052880", "Chapter 16: The Rescue", "Science Fiction", 44, 9.8));

	s2TM.setID("tt8111088");
	s2TM.setName("Season 2");
	s2TM.setGenre("Science Fiction");
	s2TM.setLength(s2TM.getNumLength());
	s2TM.setRating(s2TM.getNumRating());

	TM.addSeason(new Season(s2TM));

	TM.setID("tt8111088");
	TM.setName("The Mandalorian");
	TM.setGenre("Science Fiction");
	TM.setLength(TM.getNumLength());
	TM.setRating(TM.getNumRating());

	disneySeries.push_back(new Serie(TM));

	Serie BB;
	Season s1BB;

	s1BB.addEpisode(new Episode("tt13669028", "Chapter 1: Stranger in a Strange Land", "Science Fiction", 38, 7.3));
	s1BB.addEpisode(new Episode("tt14525192", "Chapter 2: The Tribes of Tatooine", "Science Fiction", 51, 8.1));
	s1BB.addEpisode(new Episode("tt14525196", "Chapter 3: The Streets of Mos Espa", "Science Fiction", 38, 6.4));
	s1BB.addEpisode(new Episode("tt14525202", "Chapter 4: The Gathering Storm", "Science Fiction", 47, 7.4));
	s1BB.addEpisode(new Episode("tt14526270", "Chapter 5: The Return of the Mandalorian", "Science Fiction", 50, 9.2));
	s1BB.addEpisode(new Episode("tt14525206", "Chapter 6: From the Desert Comes a Stranger", "Science Fiction", 47, 9.3));
	s1BB.addEpisode(new Episode("tt13948762", "Chapter 7: In the Name of Honor", "Science Fiction", 59, 7.7));

	s1BB.setID("tt13668894");
	s1BB.setName("Season 1");
	s1BB.setGenre("Science Fiction");
	s1BB.setLength(s1BB.getNumLength());
	s1BB.setLength(s1BB.getNumRating());

	BB.addSeason(new Season (s1BB));

	BB.setID("tt13668894");
	BB.setName("The Book of Boba Fett");
	BB.setGenre("Science Fiction");
	BB.setLength(BB.getNumLength());
	BB.setRating(BB.getNumRating());

	disneySeries.push_back(new Serie(BB));

	Service disneyPlus;
	disneyPlus.setMovies(disneyMovies);
	disneyPlus.setSeries(disneySeries);

	hboMovies.push_back(new Movie("tt1877830", "The Batman", "Drama", 176, 7.9));
	hboMovies.push_back(new Movie("tt1160419", "Dune", "Action", 155, 8.0));
	hboMovies.push_back(new Movie("tt9620288", "King Richard", "Biographical", 144, 7.5));
	hboMovies.push_back(new Movie("tt4513678", "GhostBusters: Afterlife", "Adventure", 124, 7.1));
	hboMovies.push_back(new Movie("tt6334354", "Suicide Squad", "Action", 132, 7.2));

	Serie B;
	Season s1B;

	s1B.addEpisode(new Episode("tt6866334", "Chapter One: Make Your Mark", "Comedy", 33, 8.1));
	s1B.addEpisode(new Episode("tt6866338", "Chapter Two: Use it", "Comedy", 32, 7.6));
	s1B.addEpisode(new Episode("tt6866340", "Chapter Three Make the Unsafe Choice", "Comedy", 34, 7.8));
	s1B.addEpisode(new Episode("tt6866342", "Chapter Four: Commit ... to YOU", "Comedy", 32, 7.7));
	s1B.addEpisode(new Episode("tt6866348", "Chapter Five: Do Your Job", "Comedy", 29, 8.3));
	s1B.addEpisode(new Episode("tt6866350", "Chapter Six: Listen with Your Ears, React with Your Face", "Comedy", 29, 8.4));
	s1B.addEpisode(new Episode("tt6866356", "Chapter Seven: Loud, Fast, and Keep Going", "Comedy", 37, 9.2));
	s1B.addEpisode(new Episode("tt6866358", "Chapter Eight: Know Your Truth", "Comedy", 38, 8.9));

	s1B.setID("tt5348176");
	s1B.setName("Season 1");
	s1B.setGenre("Comedy");
	s1B.setLength(s1B.getNumLength());
	s1B.setRating(s1B.getNumRating());

	B.addSeason(new Season(s1B));

	Season s2B;

	s2B.addEpisode(new Episode("tt8270790", "The Show Must Go On, Probably?", "Comedy", 38, 8.3));
	s2B.addEpisode(new Episode("tt8884332", "The Power of No", "Comedy", 33, 7.9));
	s2B.addEpisode(new Episode("tt8940996", "Past = Present x Future Over Yesterday", "Comedy", 33, 8.5));
	s2B.addEpisode(new Episode("tt8956330", "What?!", "Comedy", 34, 9.1));
	s2B.addEpisode(new Episode("tt8956332", "ronny/lily", "Comedy", 38, 9.8));
	s2B.addEpisode(new Episode("tt8956336", "The Truth Has a Ring to It", "Comedy", 35, 8.5));
	s2B.addEpisode(new Episode("tt8956340", "The Audition", "Comedy", 33, 9.0));
	s2B.addEpisode(new Episode("tt8890392", "berkman > block", "Comedy", 35, 9.3));

	s2B.setID("tt5348176");
	s2B.setName("Season 2");
	s2B.setGenre("Comedy");
	s2B.setLength(s2B.getNumLength());
	s2B.setRating(s2B.getNumRating());

	B.addSeason(new Season(s2B));

	Season s3B;

	s3B.addEpisode(new Episode("tt10162940","forgiving jeff","Comedy",29,8.5));
	s3B.addEpisode(new Episode("tt18257364","limonada","Comedy",28,8.8));
	s3B.addEpisode(new Episode("tt18257366","ben mendelsohn","Comedy",25,7.9));
	s3B.addEpisode(new Episode("tt18257368","all the sauces","Comedy",31,8.8));
	s3B.addEpisode(new Episode("tt18257370","Crazytimesh*tshow","Comedy",29,8.6));
	s3B.addEpisode(new Episode("tt18257372","710N","Comedy",29,9.5));
	s3B.addEpisode(new Episode("tt18257404","Candy asses","Comedy",34,8.7));

	s3B.setID("tt5348176");
	s3B.setName("Season 3");
	s3B.setGenre("Comedy");
	s3B.setLength(s3B.getNumLength());
	s3B.setRating(s3B.getNumRating());

	B.addSeason(new Season(s3B));

	B.setID("tt5348176");
	B.setName("Barry");
	B.setGenre("Comedy");
	B.setLength(B.getNumLength());
	B.setRating(B.getNumRating());

	hboSeries.push_back(new Serie(B));

	Serie PM;
	Season s1PM;

	s1PM.addEpisode(new Episode("tt13152020","A Whole New Whirled","Action",46,8.2));
	s1PM.addEpisode(new Episode("tt13152024","Best Friends, For Never","Action",40,8.0));
	s1PM.addEpisode(new Episode("tt13152026","Better Goff Dead","Action",39,8.5));
	s1PM.addEpisode(new Episode("tt13152032","The Choad Less Traveled","Action",46,8.3));
	s1PM.addEpisode(new Episode("tt13152038","Monkey Dory","Action",42,8.5));
	s1PM.addEpisode(new Episode("tt13152042","Murn After Reading","Action",46,8.7));
	s1PM.addEpisode(new Episode("tt13152056","Stop Dragon My Heart Around","Action",46,8.8));
	s1PM.addEpisode(new Episode("tt13152062","It's Cow or Never","Action",45,9.1));

	s1PM.setID("tt13146488");
	s1PM.setName("Season 1");
	s1PM.setGenre("Action");
	s1PM.setLength(s1PM.getNumLength());
	s1PM.setRating(s1PM.getNumRating());

	PM.addSeason(new Season(s1PM));

	PM.setID("tt13146488");
	PM.setName("Peace Maker");
	PM.setGenre("Action");
	PM.setLength(PM.getNumLength());
	PM.setRating(PM.getNumRating());

	hboSeries.push_back(new Serie(PM));

	Service HBO;
	HBO.setMovies(hboMovies);
	HBO.setSeries(hboSeries);

	// Here is where the menu starts running. While the condition stays true it will run
	while (cont){
		// We create the option variable to register the users inputs
		int option = 0;
		cout << "Welcome to your live-service provider. What platform would you like to watch?"<<endl<<"1.Neftlix"<<endl<<"2.Disney +"<<endl<<"3.HBO Max"<<endl<<"Select an option from 1-3 to continue with your selection:"<<endl;
		cin >> option;
		// All the information about netflix movies and series will be displayed
		if (option == 1){
			cout<<netflix.getMovieInfo() << endl;
			cout<<netflix.getSerieInfo() << endl;

			cout << "Choose an option from 1 to 7: " << endl;
			cin >> option;

			// The user has selected a movie
			if (option > 0 && option <= 5){
				cout << "You are watching a movie! Enjoy!"<<endl;
				cont = false;
			}
			// The user has selected Stranger Things, so will proceed to show each season info and then
			// each episode info
			else if (option == 6){
				cout << ST.getSeasonInfo() << endl;
				cout << "Choose an option from 1 to " << ST.getNumOfSeasons() << endl;
				cin >> option;
				if (option == 1){
					cout << s1ST.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				else if (option == 2){
					cout << s2ST.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!" <<endl;
					cont = false;
				}
				else if (option == 3){
					cout << s3ST.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				else if (option == 4){
					cout << s4ST.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				// If the user types a value off-limits it will throw the following exception
				else {
					cout << "Your option isn't valid! Try again" << endl;
				}
			}
			// The user has selected The Queen's Gambit, so will proceed to show each season info and then
			// each episode info
			else if (option == 7){
				cout << QG.getSeasonInfo() << endl;
				cout << "Choose an option from 1 to " << QG.getNumOfSeasons() << endl;
				cin >> option;
				if (option == 1){
					cout << s1QG.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				// If the user types a value off-limits it will throw the following exception
				else {
					cout << "Your option isn't valid! Try again" << endl;
				}
			}
		}
		else if (option == 2){
			cout<<disneyPlus.getMovieInfo() << endl;
			cout<<disneyPlus.getSerieInfo() << endl;

			cout << "Choose an option from 1 to 8: " << endl;
			cin >> option;
			if (option > 0 && option <= 6){
				cout << "You are watching a movie! Enjoy!"<<endl;
				cont = false;
			}
			else if (option == 7){
				cout << TM.getSeasonInfo() << endl;
				cout << "Choose an option from 1 to " << TM.getNumOfSeasons() << endl;
				cin >> option;
				if (option == 1){
					cout << s1TM.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				else if (option == 2){
					cout << s2TM.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				else {
					cout << "Your option isn't valid! Try again" << endl;
				}
			}
			else if (option == 8){
				cout << BB.getSeasonInfo() << endl;
				cout << "Choose an option from 1 to " << BB.getNumOfSeasons() << endl;
				cin >> option;
				if (option == 1){
					cout << s1BB.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				else {
					cout << "Your option isn't valid! Try again" << endl;
				}
			}
			else {
				cout << "Your option isn't valid! Try again" << endl;
			}
		}

		else if (option == 3) {
			cout<<HBO.getMovieInfo() << endl;
			cout<<HBO.getSerieInfo() << endl;

			cout << "Choose an option from 1 to 7: " << endl;
			cin >> option;

			if (option > 0 && option <= 5){
				cout << "You are watching a movie! Enjoy!"<<endl;
				cont = false;
			}


			else if(option == 6){
				cout << B.getSeasonInfo() << endl;
				cout << "Choose an option from 1 to " << B.getNumOfSeasons() << endl;
				cin >> option;
				if (option == 1){
					cout << s1B.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				else if (option == 2){
					cout << s2B.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				else if (option == 3){
					cout << s3B.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!"<<endl;
					cont = false;
				}
				else {
					cout << "Your option isn't valid! Try again" << endl;
				}
			}
			else if (option == 7){
				cout << PM.getSeasonInfo() << endl;
				cout << "Choose an option from 1 to " << PM.getNumOfSeasons() << endl;
				cin >> option;
				if (option == 1){
					cout << s1PM.getEpisodeInfo() << endl;
					cout << "Here are the selection of episodes! Enjoy!";
					cont = false;
				}
				else {
					cout << "Your option isn't valid! Try again" << endl;
				}
			}
			else {
				cout << "Your option isn't valid! Try again" << endl;
			}
		}

		else {
			cout << "Your option is not valid! Try again"<< endl;
		}
	}

	// Before ending, an implementation will be made to the series vector to determine what is the length and quality
	// of all the series that are in this live-service provider
	cout<<"Thank you for your visit! We hope to see you soon! If you didn't get to watch them all, here is a bit of info about the services that we have in this provider!" <<endl;
	Serie total;
	total = ST + QG;
	cout << "The total length of Netflix Series are: " << total.getLength() << ". And the average Rating is: " << total.getRating() <<endl;
	total = TM + BB;
	cout << "The total length of Disney Plus Series are: " << total.getLength() << ". And the average Rating is: " << total.getRating() <<endl;
	total = B + PM;
	cout << "The total length of HBO Series are: " << total.getLength() << ". And the average Rating is: " << total.getRating()<<endl<<endl;

	total = ST + QG + TM + BB + B + PM;
	cout << "The total length of ALL Series are: " << total.getLength() << ". And the average Rating is: " << total.getRating();

	return 0;
}


