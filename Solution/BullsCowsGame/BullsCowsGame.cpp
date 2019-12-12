#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
string PrintBack();
bool AskToPlayAgain();

//entry point
int main()
{
	bool bPlayAgain = false;
	do 
	{
		PrintIntro();

		PlayGame();

		bPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);

	return 0;
}

//scripts
void PrintIntro() {
	// introduce the game 
	constexpr int WORD_LENGTH = 5;
	cout << "Eluwina Byczki i Krufki! *u*\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? UwU\n";
	cout << endl;
	return;
}
void PlayGame()
{
	//loop for the number of turns
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		GetGuess();
		PrintBack();
		cout << endl;
	}
}
string GetGuess() 
{
	// get a guess from player
	cout << "Enter Your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;

}
string PrintBack()
{
	// repeat the guess back 
	string Guess = "";
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}
bool AskToPlayAgain()
{
	cout << "Do you want to play again? UwU\n";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}