#include <iostream>
#include <string>

using namespace std;

int main()
{
   int userChoice;

    cout << "Hello, please make a selection from the following menu:" << endl;
    cout << "1. Gargle those chicken" << endl;
    cout << "2. Munch on Piggies" << endl;
    cout << "3. Slurp some cow" << endl;
    cout << "4. Gnaw on eggs" << endl;
    cout << "5. Grow those veggies" << endl;
    cin >> userChoice;

    while (userChoice > 0 && userChoice < 6)
    {
        if (userChoice == 1)
        {
        cout << "You can't gargle chickens! What were you thinking?!";
        }
        else if (userChoice == 2)
        {
        cout << "Piggies munch back!" << endl;
        }
        else if (userChoice == 3)
        {
        cout << "Cow....slurping?! Not the brightest bulb, are we?" << endl;
        }
        else if (userChoice == 4)
        {
        cout << "As long as it isn't growing!" << endl;
        }
        else if (userChoice == 5)
        {
        cout << "Let's start now!" << endl;
        }
        break;
    }

    if (userChoice > 5 || userChoice < 0)
    {
        cout << "Let's try that again----" << endl;
        cout << "1. Gargle those chicken" << endl;
        cout << "2. Munch on Piggies" << endl;
        cout << "3. Slurp some cow" << endl;
        cout << "4. Gnaw on eggs" << endl;
        cout << "5. Grow those veggies" << endl;
    }

}
