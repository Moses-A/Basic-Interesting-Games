// High CardDeck
// Demonstrates algorithms
// Moses Arocha Code

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	char reset = 'y';
	string UserCard;

    vector<string> CardDeck;
		CardDeck.push_back("1-Spades");
		CardDeck.push_back("2-Spades");
		CardDeck.push_back("3-Spades");
		CardDeck.push_back("4-Spades");
		CardDeck.push_back("1-Clubs");
		CardDeck.push_back("2-Clubs");
		CardDeck.push_back("3-Clubs");
		CardDeck.push_back("4-Clubs");
		CardDeck.push_back("1-Hearts");
		CardDeck.push_back("2-Hearts");
		CardDeck.push_back("3-Hearts");
		CardDeck.push_back("4-Hearts");
		CardDeck.push_back("1-Diamonds");
		CardDeck.push_back("2-Diamonds");
		CardDeck.push_back("3-Diamonds");
		CardDeck.push_back("4-Diamonds");


		vector<string>::iterator myIterator;
		vector<string>::const_iterator iter;

		  cout << "\t\t Welcome To The Wonderful Game of Cards." << endl;
		  cout << "\n Rules: Enter a card, formatted like below, and see if the magician can guess." << endl;

		sort(CardDeck.begin(), CardDeck.end());

	   	cout << "\n\n Here is The Simple Card Deck: \n";
		for (iter = CardDeck.begin(); iter != CardDeck.end(); ++iter)
		{
			cout << "\t" << *iter << endl;
		}

		cout << "\n Please enter the card of your thoughts: ";
		getline (cin, UserCard);

		while (reset == 'y' || reset == 'Y')
			{
				srand(static_cast<unsigned int>(time(0)));
				random_shuffle(CardDeck.begin(), CardDeck.end());
					cout << "\n\t Right now the deck of cards is being shuffled. " << endl;
					cout << "\n Would you like to shuffle the deck again? [Y/N] ";
						cin >> reset;
			}

		cout << "\n\n    If You Dare. Push Enter To Continue The Dark Magic Process... " << endl;
			cin.ignore();
			cin.ignore();

		iter = find(CardDeck.begin(), CardDeck.end(), UserCard);
	
			if (iter != CardDeck.end())
				{
					cout << "\n\n\n\n Your Card has been found.\n\n\t\t Is this your card? " << UserCard;
				}
			else
				{
					cout << "\n\n\n\n Your Card has not been found, try again. \n";
				}

		cout << "\n\n\n" << endl;

	return 0;
}
