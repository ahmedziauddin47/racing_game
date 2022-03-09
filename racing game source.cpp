//racing game
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	//declared and initialized variables

	//while nobody has finished
	//variable declaration
	const int TRACK_LENGTH = 100;
	int racer1 = 0;
	int racer2 = 0;
	int racer3 = 0;
	int racer4 = 0;
	int critical1 = 0;
	int critical2 = 0;
	int critical3 = 0;
	int critical4 = 0;
	char miles = critical1;


	//seeded the RNG (= initialize)
	srand(time(0));
	

		while (racer1 < TRACK_LENGTH && racer2 < TRACK_LENGTH && racer3 < TRACK_LENGTH && racer4 < TRACK_LENGTH)
		{
			critical1 += 1 + rand() % 2;
			critical2 += 1 + rand() % 10;
			critical3 += 1 + rand() % 10;
			critical4 += 1 + rand() % 10;
			
			//rng formula: lower value + rand() % rangeSize
			// 1 + rand() % 6
			//roll die and move Racer 1
			// 
			//roll die and move Racer 2
			racer1 += 1 + rand() % 6;
			racer2 += 1 + rand() % 6;
			racer3 += 1 + rand() % 6;
			racer4 += 1 + rand() % 6;
			

			//display status
			cout << "racer 1: " << racer1;
			cout << "\tracer 2: " << racer2;
			cout << "\tracer 3: " << racer3;
			cout << "\tracer 4: " << racer4;
			cout << "\t";

			if (racer1 > racer2 && racer1 > racer3 && racer1 > racer4)
			{
				cout << "Racer 1 is in the lead!" << endl;
			}
			else if (racer2 > racer1 && racer2 > racer3 && racer2 > racer4)
			{
				cout << "Racer 2 is in the lead!" << endl;
			}
			else if (racer3 > racer1 && racer3 > racer2 && racer3 > racer4)
			{
				cout << "Racer 3 is in the lead!" << endl;
			}
			else if (racer4 > racer1 && racer4 > racer2 && racer4 > racer3)
			{ 
				cout << "Racer 4 is in the lead!" << endl;
			}
			else
			{
				cout << "The Racers are at a stand still!" << endl;
			}
			system("pause");
		}

		//display results

		if (racer1 > TRACK_LENGTH && racer2 > TRACK_LENGTH && racer3 > TRACK_LENGTH && racer4 > TRACK_LENGTH)
		{
			cout << "it's a tie!" << endl;
		}
		else if (racer1 > TRACK_LENGTH)
		{
			cout << "Racer 1 wins the race!" << endl;
		}
		else if (racer2 > TRACK_LENGTH)
		{
			cout << "Racer 2 wins the race!" << endl;
		}
		else if (racer3 > TRACK_LENGTH)
		{
			cout << "Racer 3 wins the race!" << endl;
		}
		else
		{
			cout << "Racer 4 wins the race!" << endl;
		}
		//announce winner

		cout << endl << endl;

	
}