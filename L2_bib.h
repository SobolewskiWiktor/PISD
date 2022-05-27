#ifndef znam_bib
#define znam_bib
#include <stdexcept>
using namespace std;
//prosta 
struct prosta
{
    int wspolczynnik_a;
    int wspolczynnik_b;
    prosta (int wspolczynnik_a = 0, int wspolczynnik_b = 0);
    void wypisz_prosta();
};

prosta::prosta(int a,int b)
{
  wspolczynnik_a = a;
  wspolczynnik_b = b;
}
void prosta::wypisz_prosta()
{
    cout<<"prosta jaka podales to: y="<<wspolczynnik_a<<"x+"<<wspolczynnik_b<<endl;
}

//punkt
struct punkt{
    int wspolzedna_x;
    int wspolzedna_y;
    punkt (int podany_x = 0, int podany_y = 0);
    void wypisz_punkt(); 
};
punkt::punkt(int x, int y)
{
    wspolzedna_x = x;
    wspolzedna_y = y;
}
void punkt::wypisz_punkt()
{
    cout<<"Punkt jaki podales ma wspolzedne (x,y): "<<wspolzedna_x<<";"<<wspolzedna_y<<endl;
}

void prosta_z_punktow (int x,int y,int z,int f)
{
    int a;
    a = ((y-f)/x-z);
    int b;
    b = ((y-((y-f)/(x-z)))*x);
    cout<<"Twoja prosta z punktow to: y="<<a<<"x+"<<b<<endl;
}
#endif
