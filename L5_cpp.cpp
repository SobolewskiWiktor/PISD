#include <iostream>
#include "bib.h"

using namespace std;

int main ()
{
    int wybor;
    Stos jeden;
    int c; 
     while(true)
     {
         cout<<endl;
         cout<<"MENU"<<endl;
         cout<<"1. Wpisz do stosu"<<endl;
         cout<<"2. Wypisz ze stosu"<<endl;
         cout<<"3. Usun ze stosu"<<endl;
         cout<<"4. Ile jest w stosie"<<endl;
         cout<<"5. Jaka jest pierwsza liczba"<<endl;
         cout<<"6. Kopjuj stos"<<endl; 
         cout<<"7. Usun stos"<<endl;
         cin>>wybor;
         cout<<endl;
         switch(wybor)
         {
            case 1:
            {
               cout<<"Podaj liczbe"<<endl;
               cin>>c; 
              jeden.wstaw(c);
              break;
            }
            case 2:
            {
            cout<<"Twoj stos to:"<<endl;
            cout<<endl;
            jeden.wypisz();
            break;
            }
            case 3: 
            {
             jeden.usun(); 
             break;  
            }
            case 4: 
            {
             cout<<"Stos zawiera: "<<jeden.Ile()<<" elementow."<<endl;
             break;
            }
         }
     }
    return 0;
}
