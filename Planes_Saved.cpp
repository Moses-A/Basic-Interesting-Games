// Inline Function
// Demonstrates function inlining
// Author is Moses Arocha

#include <iostream>
#include <cstdlib>
#include <string>

int inline mathProblem(int Planes);
int inline peopleSaved(int people);

using namespace std;
 

int main()
{
   int Planes = 3;
   int PlaneType;
   int people;
   char restart = 'y';

	//The title of the game begins here
	cout << "\t\t Welcome To The Amazing Game Of Planes." << endl;
	cout << " \n\n\t The rules of this game are simple, you must help everyone.\n\t You start with " << Planes << " airplanes and try to take care of everyone." << endl;

	while (restart == 'y' || restart == 'Y') // the game will continue to loop, as long as restart equals y
	{
		cout << "\n\n Please Enter the type of Plane wanted. Either a Boeing 747 or a Boeing 737?";
		cout << "\n\n\t\t\t Boeing: ";
		 cin >> PlaneType;

		cout << "\n\n\t\n Please Enter The Number of Planes Wanted To Save: ";
		cin >> Planes; // no catch all functions

		if (PlaneType == 747)
			{
				 people = 6 * Planes;

				 for (int i = 0; i < 8; ++i)
				{
					cout << "\n";
					cout << " You have saved " << people << " people with " << Planes << " planes. \n" << endl;
					Planes = mathProblem(Planes);
					people = peopleSaved(people);
				}
			}

		else if (PlaneType == 737)
			{
				 people = 215 * Planes;

				 for (int i = 0; i < 8; ++i)
				{
					cout << "\n";
					cout << " You have saved " << people << " people with " << Planes << " planes. \n" << endl;
					Planes = mathProblem(Planes);
					people = peopleSaved(people);

				}
			}

		else
			{
				cout << "\n\t You have entered it in wrong, nice job. Everyone has died.\n\n";
			}

	cout << " Do You Wish To Repeat This Wonderful Game? [Y/N]  ";
	cin >> restart;

	if (restart == 'n' || restart == 'N')
		{
			break;
		}

	}

	return 0;
}

// both of the functions rely on each other and calculate based off each other
inline int  mathProblem (int Planes) // defined at the beginning of the code
{
    return (Planes + 1);
}

inline int  peopleSaved (int people) // defined in the beginning of the code
{
    return (people + 25);
}
