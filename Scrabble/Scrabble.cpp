#include <iostream>

using namespace std;

int checkWords(string player1Input, string player2Input);

int main()
{
	string player1Input = "";
	string player2Input = "";

	cout << "Player 1, enter your word: ";
	cin >> player1Input;
	cout << "Player 2, enter your word: ";
	cin >> player2Input;

	// Check words and assign points

	int winner = checkWords(player1Input, player2Input);

	//Determine the winner
	switch (winner)
	{
		case 1:
			cout << "Player 1 wins!\n";
			break;
		case 2:
			cout << "Player 2 wins!\n";
			break;
		default:
			cout << "Tie!\n";
			break;
	}

	return 0;
}

int checkWords(string player1Input, string player2Input)
{
    int points[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
    int sum_player1 = 0;
    int sum_player2 = 0;

    for (int i = 0; i < player1Input.length(); i++)
    {
        int letter = toupper(player1Input[i]) - 65;
        if (letter >= 0 && letter <= 25)
        {
            sum_player1 = sum_player1 + points[letter];
        }
    }

    for (int i = 0; i < player2Input.length(); i++)
    {
        int letter = toupper(player2Input[i]) - 65;
        if (letter >= 0 && letter <= 25)
        {
            sum_player2 = sum_player2 + points[letter];
        }
    }

    if (sum_player1 > sum_player2)
    {
        return 1;
    }
    else if (sum_player2 > sum_player1)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
