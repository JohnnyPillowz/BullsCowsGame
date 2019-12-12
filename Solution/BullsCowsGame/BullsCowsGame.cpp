#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetAndPrintGuess();

//entry point
int main()
{
	PrintIntro();

	GetAndPrintGuess();
	GetAndPrintGuess();

	cout << endl;
	
	return 0;
}

string GetAndPrintGuess() {
	// get a guess from player
	cout << "Enter Your guess: ";
	string Guess = "";
	getline(cin, Guess);
	// repeat the guess back 
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}
void PrintIntro() {
	// introduce the game 
	constexpr int WORD_LENGTH = 5;
	cout << "Eluwina Byczki i Krufki! *u*\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? UwU\n";
	cout << endl;
	return;
}
