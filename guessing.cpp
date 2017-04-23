/*guessing game. this game will asks the user to guess a number between 1 and a 100. If the user guessed correctly, 
it will say they win. If their number is too high or too low it will also let them know. */

#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int answer;
	srand(time(0));

	answer= rand() % 100 + 1;
	int user_input;

	cout << "I am thinking of a number from 1 to 100...What do you think it is?" << endl;
	cin >> user_input;

	if (user_input == answer)
	{
		cout << "You are correct!" << endl;
	}

	else if (user_input < answer)
	{
		cout << "I was thinking of " << answer << endl;
		cout << "Your answer was less than my number " << endl;
	}
	else if (user_input > answer)
	{
		cout << "I was thinking of " << answer << endl;
		cout << "Your answer was higher than my number " << endl;
	}

	


	system("pause");
	return 0;
}