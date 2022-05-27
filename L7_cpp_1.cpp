#include <iostream>
#include "towar.h"
#include "bib.h"

using namespace std;

int main ()
{
    Lista  <int> l1 ; 
    l1.wstaw(20); 
    l1.wstaw(30);
    l1.wstaw(5);
    l1.wstaw(1);
    l1.wstaw(40);
    l1.wypisz();

    Lista <Towar> l2;
    Towar t ("jablka", 30, 20.5, 3.15);
    l2.wstaw(t);
    l2.wypisz(); 

    return 0; 
}
