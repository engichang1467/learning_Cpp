#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const float TAX_RATE = 0.04;

int main()
{
    // variables
    string name;
    float price = 4.50, charge = 0, taxCharge = 0;
    int qty = 0;

    // get input from user
    cout << "Enter the number you wish to order: " << endl;
    cin >> qty;

    // format output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    // Calc
    charge = price * qty;
    taxCharge = charge * TAX_RATE;
    cout << "The tax charged is : $ " << setprecision(2) << taxCharge << endl;
    charge += taxCharge;

    cout << " Your total charge: $ " << setprecision(2) << charge << endl;

    return 0;


}