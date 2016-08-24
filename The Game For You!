// Using Vectors and Iterators
// Demonstrates iterators
// Author is Moses Arocha

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	
vector<string> UserFavorites;
int ClassDelete;
char DeleteNumber;
char AddFavorites = 'y';
string Favorites;
string FavoriteChange;
string QuestionAnswer;
	
// introduction to Code
	cout << "\t\t Welcome To The Amazing World of You! \n" << endl;
	cout << "\t The place where everything is tailored to you! " << endl;
	
// Place of intro to question for Vectors
	cout << "\n\t First, Let's Think about your Favorite Topics. " << endl;
	int Counter = 0;
	int FavoriteReset = 1;


// Place of Body of Coding
	cout << "\n\n Please Enter Your Favorite Topic:  ";
	getline (cin, QuestionAnswer);

	while ( AddFavorites == 'y' || AddFavorites == 'Y')
	{
		
		cout << "\n\t What is your favorite " << QuestionAnswer << " ? ";
		getline (cin, Favorites);
		UserFavorites.push_back(Favorites);

	// Do-while Loop For Game ADD Repeat
		cout << "\n\n Would you want to add more favorites? [Y/N] ";
		cin >> AddFavorites;
		cin.ignore();
	}

	cout << "\n What would you like to Replace with the latest item ? \n\t\t: ";
	getline (cin, FavoriteChange);
	UserFavorites.pop_back();
	UserFavorites.push_back(FavoriteChange);
			
vector<string>::iterator myIterator;
vector<string>::const_iterator iter;


	cout << "\n Your " << QuestionAnswer << " List is:\n";
	for (iter = UserFavorites.begin(); iter != UserFavorites.end(); ++iter)
	{
		cout << "\t" << ++Counter << ". " << *iter << endl;
	}
					
	cout << "\n Would you like to delete anything from the list? [Y/N] ";
	cin >> DeleteNumber;

	if (DeleteNumber == 'Y' || DeleteNumber == 'y')
	{
		cout << "\n Which number in the category do you want to delete? ";
		cin >> ClassDelete;
		ClassDelete = ClassDelete - 1;
		UserFavorites.erase((UserFavorites.begin() + ClassDelete));
	}

	cout << "\n Your Favorite List:\n";
	for (iter = UserFavorites.begin(); iter != UserFavorites.end(); ++iter)
	{
		cout << "\t " << *iter << endl;
	}
	int score = 0;

	if (QuestionAnswer == "Books" || QuestionAnswer == "books")
	{
		score = score + Favorites.length();
		cout << "\n You have read a total of " << score << " total books this year." << endl;
	}
		
	else if (QuestionAnswer == "food" || QuestionAnswer == "Food" )
	{
		score = score + Favorites.length();
		cout << "\n You have eaten a total of " << score << " total Calories so far today." << endl;
	}
		
	else if (QuestionAnswer == "Cars" || QuestionAnswer == "cars")
	{
		score = score + Favorites.length();
		cout << "\n You will have a total of " << score << " cars soon. " << endl;
	}
			
	cout << "\n" << endl;

	return 0;
}
