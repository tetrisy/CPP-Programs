#include <iostream>

using namespace std;

void print_row(int bricks);
int print_space(int spaces, int blank);

int main(void)
{
	int blank = 1;
	int height = 0;

	do
	{
		cout << "What is the height of the pyramid: ";
		cin >> height;
	} while (height <= 1 || height >= 8);

	for (int i = 1; i <= height; i++)
	{
		blank = print_space(height, blank);
		print_row(i);
		cout << " ";
		print_row(i);
		cout << "\n";
	}
}

int print_space(int spaces, int blank)
{
	for (int i = spaces - blank; i > 0; i--)
	{
		cout << " ";
	}

	return blank + 1;
}

void print_row(int bricks)
{
	for (int i = 0; i < bricks; i++)
	{
		cout << "#";
	}
}

