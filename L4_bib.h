#ifndef znam_bib
#define znam_bib
#include <stdexcept>
using namespace std;
struct kolejka
{
   private:
   int ile_jest;
   int* dane;
   
   public:
   kolejka();
   void wstaw(int dodane);
   void wypisz();
   int wyjmij();
   void wyczysc();
   int rozmiar();
   int pierwszy();
   int ostatnia();
   kolejka (const kolejka &st);
};
kolejka::kolejka()
{
   ile_jest = 0;
   dane=nullptr; 
}
void kolejka::wstaw(int a)
{
    int* pom;
    pom = new int [ile_jest + 1]; // definiowanie nowej tablicy temp.
    for (int i=0; i<ile_jest; i++) // kopiowanie ''danej'' do tablicy temp
    {
        pom[i]=dane[i];
    }
    pom[ile_jest] = a; //dodanie na ostatnim miejscu nowej temp ostatniej nowej danej 
    delete [] dane; // usuniecie starej tablicy
    dane = pom; //zastapienie adresu starej tablicy z danymi na nowa
    ile_jest ++; 
}
void kolejka::wypisz()
{
    for(int i=0; i<ile_jest; i++)
    {
        cout<<dane[i]<<" ";
    }
    cout<<endl;
}
int kolejka::wyjmij()
{
    int usuwana; 
    int* pom;
    pom = new int [ile_jest - 1];
    for (int i=0; i<ile_jest - 1; i++)
    {
        pom[i]=dane[i+1];
    }
    usuwana = dane[0];
    delete [] dane;
    dane = pom; 
    return usuwana; 
    
}
void kolejka::wyczysc()
{
    ile_jest = 0;
    dane = nullptr;
    cout<<"Dane zostaly wyczyszczone"<<endl;
}
int kolejka::rozmiar()
{
  return ile_jest;
}
int kolejka::pierwszy()
{
   if (ile_jest != 0 )
   {
       return dane[0];
   }
   else
   {
       cout<<"Nie ma kolejki"<<endl;
   }
}
int kolejka::ostatnia()
{
    if (ile_jest != 0 )
   {
       return dane[ile_jest - 1];
   }
   else
   {
       cout<<"Nie ma kolejki"<<endl;
   }
}
kolejka::kolejka(const kolejka &st)
{
    ile_jest = st.ile_jest;
    dane = new int [ile_jest];
    {
        for (int i=0; i<ile_jest; i++)
        {
            dane[i] = st.dane[i];
        }
    }
}
#endif
