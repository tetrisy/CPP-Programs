//create a bank management system.the program gives option like :
//
//add money
//withdraw
//check balance
//exit
//
//it should run in a loop, till user enters 4 for exit.

#include <iostream>
using namespace std;

void addMoney(int &accBalance, int amount) {
    accBalance += amount;
}

void withdrawMoney(int& accBalance, int amount) {
    if (accBalance < amount) {
        cout << "There is not enough balance to withdraw this amount." << endl;
    } else {
        accBalance -= amount;
    }
}

void displayBalance(int accBalance) {
	cout << "Your current balance is: " << accBalance << "$" << endl;
}

int main() {
    int accBalance = 0;
    int choice;
    int amount;
    while (true) {
        cout << "\nBank Management System\n" << endl;
		cout << "1. Add Money" << endl;
		cout << "2. Withdraw Money" << endl;
		cout << "3. Check Balance" << endl;
		cout << "4. Exit" << endl;
		cout << "Choose an option: ";
        cin >> choice;
		cout << "\n";

        switch (choice) {
            case 1: {
                cout << "How much money do you want to deposit?: ";
                cin >> amount;
                addMoney(accBalance, amount);
                break;
            }
            case 2:
            {
				cout << "How much money do you want to withdraw?: ";
                cin >> amount;
				withdrawMoney(accBalance, amount);
                break;
            }
            case 3: {
				displayBalance(accBalance);
                break;
            }
            case 4: {
                return 0;
                break;
            }
        }
        cout << "\n\n\n";
    }

    return 0;
}