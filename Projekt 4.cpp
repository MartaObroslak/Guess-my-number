#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));
    int liczba = rand() % 100 + 1;

    int xLiczba;
    int liczbaProb = 0;

    cout << "Witaj w grze 'Zgadnij moją liczbę'!" << endl;

    do
    {
        cout << "Zgadnij liczbę (zakres 1-100): ";
        cin >> xLiczba;

        liczbaProb++;

        if (xLiczba > liczba)
        {
            cout << "Za dużo!" << endl;
        }
        else if ( xLiczba < liczba)
        {
            cout << "Za mało!" << endl;
        }
        else
        {
            cout << "Brawo! Zgadłeś liczbę po " << liczbaProb << " próbach." << endl;
        }
    } while (xLiczba != liczba);

    return 0;
}