#include <iostream>
using namespace std;
int main()
{
	int number=70, guess;
	cout << "Guess the number between 1-100: " << endl;
	do
	{
		cin >> guess;
		if(guess < number)
		{
			cout << "Too low. Try again." << endl;
		}
		else if(guess > number)
		{
			cout << "Too high. Try again." << endl;
		}
		else if(guess == number)
		{
			cout << "Congratulations! you guessed right number.";
		}
	}
	while(guess != number);
	{
		return 0;
	}
}
