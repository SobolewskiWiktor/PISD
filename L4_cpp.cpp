#include <iostream>
#include "bib.h"

using namespace std;

int main ()
{
    int liczba; 
    int usuwanie;
    kolejka jeden;
    while(true)
    {
        cout<<"podaj liczbe:";
        cin>>liczba;
        if (liczba == 1927)
        {
            break;
        }
        jeden.wstaw(liczba);
    }
    cout<<"twoja kolejka to:"<<endl;
    jeden.wypisz();
    while(true)
    {
        cout<<"Czy chcesz usunac?"<<endl;
        cout<<"1. TAK"<<endl;
        cout<<"2. NIE"<<endl;
        cin>>usuwanie;
        if (usuwanie == 1)
        {
            cout<<"wyjales liczbe: "<<jeden.wyjmij()<<endl; 
        }
        else
        {
            break;
        }
    }
    cout<<"twoja kolejka po usuwaniu to:"<<endl;
    jeden.wypisz();
    cout<<"piwerwszy wyraz to: "<<jeden.pierwszy()<<endl;
    cout<<"ostatni wyraz to:"<<jeden.ostatnia()<<endl;
    cout<<"jest: "<<jeden.rozmiar()<<" wyrazow"<<endl;
    kolejka dwa(jeden); 
    dwa.wypisz();
    return 0;
}
