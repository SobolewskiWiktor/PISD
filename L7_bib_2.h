#ifndef znam_bib2
#define znam_bib2
#include <stdexcept>
using namespace std;
struct Towar
{
    private:
      string nazwa; 
      int kod; 
      float ilosc; 
      float cena;
    
    public:
     Towar(string N="", int K =1, float il = 0, float c = 0)
     {
         nazwa = N;
         kod = K;
         ilosc = il; 
         cena = c ;
     }

     bool operator <= (Towar &t)
     {
         if (cena <= t.cena)
         {
             return true;
         }
         else
         {
             return false; 
         }
     }
     bool operator < (Towar &t)
     {
         if (cena < t.cena)
         {
             return true;
         }
         else
         {
             return false; 
         }
     }

     friend ostream & operator << (ostream &os, Towar &tow);

};
ostream & operator <<(ostream &os, Towar&tow)
{
    os<<tow.nazwa<<" kod:"<<tow.kod;
    return os; 
}

#endif
