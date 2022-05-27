#include <iostream>
#include "bib.h"

using namespace std;

int main ()
{
    int x, y;
    int wybor;
    cout<<"Witaj! podaj jakiej wielkosci stos chcesz utworzyc"<<endl;
    cin>>x;
    stos pierwszy_stos(x);
    while(true)
    {
        cout<<"------ MENU -----"<<endl;
        cout<<"1. Dodaj do stosu"<<endl;
        cout<<"2. Wypisz stos"<<endl; 
        cout<<"3. Jak duzy jest stos"<<endl;
        cout<<"4. Znajdz w stosie"<<endl;
        cout<<"5. Wyczysc stos"<<endl;
        cout<<"6. Zdejmij ze strosu"<<endl;
        cout<<"7. Duplikuj stos"<<endl;
        cin>>wybor;

        switch (wybor)
        {
        case 1:
           pierwszy_stos.dodaj_do_stosu();
           break;
        case 2:
            pierwszy_stos.wypisz_stos();
            break;
        case 3:
            pierwszy_stos.jak_duzy();
            break;
        case 4:
            cout<<"jaka liczbe chcesz znalezc? "<<endl;
            cin>>y;
            pierwszy_stos.znajdz_w_stosie(y);
            break;
        case 5:
            pierwszy_stos.czyszczenie();
            break;
        case 6:
            pierwszy_stos.zdejmij();
            break;
        case 7:
            stos drugi_stos(pierwszy_stos);
            break;
        }
    }
    return 0;
}
