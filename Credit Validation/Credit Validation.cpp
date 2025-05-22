#include <iostream>
#include <string>

using namespace std;

string card_check(long long card);
int checksum(string card, int length);

int main()
{
    long long card_number;
    cout << "Provide card number to validate: ";
    cin >> card_number;
    cout << card_check(card_number);
}

string card_check(long long card)
{
    string status = "";
    string cardStr = to_string(card);
    int length = cardStr.length();

    switch (length)
    {
        case 15:
            if ((cardStr[0] == '3' && cardStr[1] == '7') || (cardStr[0] == '3' && cardStr[1] == '4'))
            {
                if (checksum(cardStr, length) == 0)
                {
                    status = "AMEX\n";
                    break;
                }
                else
                {
                    status = "INVALID\n";
                    break;
                }
            }
        case 13:
            if (cardStr[0] == '4')
            {
                if (checksum(cardStr, length) == 0)
                {
                    status = "VISA\n";
                    break;
                }
                else
                {
                    status = "INVALID\n";
                    break;
                }
            }
        case 16:
            if (cardStr[0] == '4')
            {
                if (checksum(cardStr, length) == 0)
                {
                    status = "VISA\n";
                    break;
                }
            }
            else if ((cardStr[0] == '5' && cardStr[1] == '1') ||
                         (cardStr[0] == '5' && cardStr[1] == '2') ||
                         (cardStr[0] == '5' && cardStr[1] == '3') ||
                         (cardStr[0] == '5' && cardStr[1] == '4') ||
                         (cardStr[0] == '5' && cardStr[1] == '5'))
            {
                if (checksum(cardStr, length) == 0)
                {
                    status = "MASTERCARD\n";
                    break;
                }
            }
            else
            {
                status = "INVALID\n";
                break;
            }
        default:
            status = "INVALID\n";
            break;
    }
    return status;
}

int checksum(string card, int length)
{
    int temp_multiply = length - 2;
    int sum_multiply = 0;
    while (temp_multiply >= 0)
    {
        int multiply = (card[temp_multiply] - '0') * 2;
        if (multiply > 9)
        {
            int dig1 = multiply / 10;
            int dig2 = multiply % 10;
            sum_multiply = sum_multiply + dig1 + dig2;
        }
        else
        {
            sum_multiply = sum_multiply + multiply;
        }
        temp_multiply -= 2;
    }

    int temp = length - 1;
    int n_sum = 0;

    while (temp >= 0)
    {
        n_sum += (card[temp] - '0');
        temp -= 2;
    }

    int sum = sum_multiply + n_sum;

    int valid = sum % 10;

    return valid;
}