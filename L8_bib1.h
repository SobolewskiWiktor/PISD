#ifndef znam_bib
#define znam_bib
using namespace std; 
struct Student
{
   
      string index;
      string ocena;
      string nazwisko;
      string pierwsze_imie;
      string drugie_imie; 

    
    Student(string i, string o, string n, string pi, string di)
    {
        index = i;
        ocena = o;
        nazwisko = n;
        pierwsze_imie = pi;
        drugie_imie = di; 
    }
    bool operator <= (Student &t)
     {
         if (index <= t.index)
         {
             return true;
         }
         else
         {
             return false; 
         }
     }
     bool operator > (Student &t)
     {
         if (index > t.index)
         {
             return true;
         }
         else
         {
             return false; 
         }
     }
     Student() = default;
};
ostream & operator <<(ostream &os, Student&tow)
{
    os<<tow.nazwisko<<" "<<tow.drugie_imie<<" "<<tow.pierwsze_imie<<" "<<tow.index<<" "<<tow.ocena;
    return os; 
}

#endif
