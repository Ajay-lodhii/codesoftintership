#include <iosteam>
#include <cstdlib>
#include <ctime>
 
using namespace std;
int main() {
	// seed the random number generator 
	srand(static_cast<unsigned int>(time(0)))

	// Generate a random number between 1 and 100
	int randomNumber = rand() % 200 + 1;
	int guess = 0;
	cout << "welcome to number guessing game" << endl;
	cout << "i have a select a number between 1 and 200. try to guess it!" << endl;
	// loop untile the user guesses the correct number 
	while (guess != random number) {
		cout << "enter your guess." << endl;
		cin >> guess;
		if (guess < randomNumber) {
			cout << "|too low! Try again." << endl;
		}
		else if (guess > randomNumber) {
			cout << "too high!Try again." << endl;
		}
		else {
			cout << "congratulations!You've guessed the correct numbers." << endl;

		}
	}
	return 0;
}