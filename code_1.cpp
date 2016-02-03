//Drink Machine v1.0 by Thomas Fantasia

#include <iostream>
using namespace std;

int d;
int main ()
{
    cout << "Please enter one of the following numbers: (1, 2, 3, 4, 5): ";
    cin >> d;

    if (d == 1)
        cout << "You have selected Mountain Dew." << endl;
    else if (d == 2)
        cout << "You have selected Crush Orange." << endl;
    else if (d == 3)
        cout << "You have selected Fanta Strawberry." << endl;
    else if (d == 4)
        cout << "You have selected Nestea." << endl;
    else if (d == 5)
        cout << "You have selected Blue Powerade." << endl;


}
