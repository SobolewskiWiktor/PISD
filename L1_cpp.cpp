#include <iostream>
#include "biblioteka1.h"
using namespace std; 


 void wypisz (osoba x)
 {
     cout<<x.imie<<" "<<x.nazwisko<<endl; 
     cout<<"pesel to: ";
     for(int i=0; i<9; i++)
     {
        cout<<i+1<<" ";
     }
     cout<<endl; 

 }
