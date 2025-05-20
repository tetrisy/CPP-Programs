#include <iostream>

using namespace std;

float split(float bill, float tax, int tip);

int main()
{
    float bill_amount = 0;
    float tax_percent = 0;
    int tip_percent = 0;

    cout << "Bill before tax and tip: ";
    cin >> bill_amount;
    cout << "Sale Tax Percent: ";
    cin >> tax_percent;
    cout << "Tip percent: ";
    cin >> tip_percent;

    cout << "You will owe " << split(bill_amount, tax_percent, tip_percent) << " each!" << endl;
}

float split(float bill, float tax, int tip)
{
    float tax_percent = tax / 100 + 1;
    float tip_percent = (tip * 1.0) / 100 + 1;

    float after_tax = bill * tax_percent;
    float to_pay = after_tax * tip_percent;

    float split = to_pay / 2;

    return split;
}