#include <iostream>
#include "bib.h"

using namespace std;

int main ()
{
    int a,b,x,y;
    cout<<"Podaj wspolczynnik a: "<<endl;
    cin>>a;
    cout<<"Podaj wspolczynnik b:"<<endl;
    cin>>b;
    prosta z(a,b);
    cout<<"Podaj punkt x: "<<endl;
    cin>>x;
    cout<<"Podaj punkt y: "<<endl;
    cin>>y;
    punkt k(x,y);
    cout<<"Podaj punkt x: "<<endl;
    cin>>x;
    cout<<"Podaj punkt y: "<<endl;
    cin>>y;
    punkt q(x,y);
    k.wypisz_punkt();
    z.wypisz_prosta();
    q.wypisz_punkt();   
    prosta_z_punktow(k.wspolzedna_x,k.wspolzedna_y,q.wspolzedna_x,q.wspolzedna_y);

    return 0;
}
