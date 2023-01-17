#include <iostream>
#include "mnozenie.h"
#include "dodawanie.h"
#include "dzielenie.h"
#include "odejmowanie.h"
#include "menu.h"

using namespace std;

int main()
{
    float a,b;
    int dzialanie;
    cout<<"\n\t\tKALKULATOR\n";
    cout<<"\nPodaj a: ";
    cin>>a;

    cout<<"\nPodaj b: ";
    cin>>b;
    menu();

    cout<<"\n\nDzialanie: ";
    cin>>dzialanie;

    switch(dzialanie)
    {
        case 1: cout<<"\nwynik: "<<dodawanie(a,b); break;
        case 2: cout<<"\nwynik: "<<odejmowanie(a,b); break;
        case 3: cout<<"\nwynik: "<<mnozenie(a,b); break;
        case 4: cout<<"\nwynik: "<<dzielenie(a,b); break;
        default: cout<<"\nNieznane działanie"; break;
    }
    return 0;
}