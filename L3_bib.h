#ifndef znam_bib
#define znam_bib
#include <stdexcept>
using namespace std;
//prosta 
struct stos
{
    private:
    int maks_rozmiar; 
    int* dane; 
    int ile_jest; 
    public: 
    stos (int mr = 10);
    void wypisz_stos();
    void dodaj_do_stosu();
    void jak_duzy();
    void znajdz_w_stosie(int y);
    void czyszczenie();
    int zdejmij();
    kopia_stosu (const stos &st);
    bool porowanie (const stos st);
    void przypisanie (const stos &st);

};

stos::stos (int x)
{
 if (x<=0)
 {
     cout<<"error"<<endl;
 }
 else
 {
    maks_rozmiar = x;
    dane = new int [maks_rozmiar];
    ile_jest = 0; 
 }
}
void stos::dodaj_do_stosu()
{
    int k = ile_jest;
    int liczba;
    cout<<"Zaraz zostaniesz porposzony o podanie liczb"<<endl;
    cout<<"jezeli chcesz zakonczyc dodawanie wpisz 0"<<endl;
    while(true)
    {
        if (ile_jest<=maks_rozmiar)
        {
            cout<<"Podaj wartosc"<<endl;
            cin>>liczba;
            if (liczba != 0)
            {
                dane[k] = liczba;
                ile_jest ++;
            }
            else
            {
                break;
            }
        }
        else
        {
            cout<<"!! stos jest pelny !!"<<endl;
            break;
        }
        k++; 
    }
}
void stos::wypisz_stos()
{
    if (ile_jest == 0)
    {
        cout<<"Przykro nam ale stos jest pusty"<<endl;
    }
    else
    {
        cout<<"Twoj stos to: "<<endl;
    for(int i=ile_jest - 1; i>=0; i--)
    {
        cout<<dane[i]<<endl;
    }
    cout<<endl;
    }
}
void stos::jak_duzy()
{
    cout<<"Twoj stos ma: "<<maks_rozmiar<<" miejsc"<<endl;
    cout<<"Natomiast zajetych masz: "<<ile_jest<<" miejsc"<<endl;
}
void stos::znajdz_w_stosie(int y)
{
    int miejsce;
    int skuchy;
     miejsce = ile_jest; 
  for (int i=ile_jest; i>=0; i--)
  {
      if (dane[i]!=y)
      {
          skuchy ++; 
          miejsce --;
          if (skuchy == ile_jest)
          {
              cout<<"Niestety twojej liczby nie ma na stosie"<<endl;
          }
      }
      else if (dane[i]==y)
      {
          cout<<"Udalo nam sie znalezc!"<<endl;
          cout<<"Szukana liczba jest na: "<<miejsce + 1<<" miejscu"<<endl;
          break;
      }
      
  }
}
void stos::czyszczenie()
{
    for(int i=0; i<maks_rozmiar; i++)
    {
        dane[i] = 0;
    }
    ile_jest = 0; 
    cout<<"---- Dane wyczyszczone ---"<<endl;
}
int stos::zdejmij()
{
    int suma = 0;
    if (ile_jest != 0)
    {
        ile_jest --; 
        return(dane[ile_jest]);
    }
    else
    {
        cout<<"Przykro nam ale stos jest pusty"<<endl;
    }
}
stos::kopia_stosu(const stos &st)
{
    maks_rozmiar = st.maks_rozmiar;
    ile_jest = st.ile_jest;
    dane = new int [maks_rozmiar]
    for (int i=0; i<ile_jest;i++)
    {
        dane[i]= st.dane[i];
    }
}
stos::porowanie(const stos st)
{
   for (int i=0; i<ile_jest; i++)
   {
       if(dane[i]!=st.dane[i])
       {
         return false;
       }
       return true;
   }
}
stos::przypisanie (const stos &st)
{
   maks_rozmiar = st.maks_rozmiar;
    ile_jest = st.ile_jest;
    dane = new int [maks_rozmiar]
    for (int i=0; i<ile_jest;i++)
    {
        dane[i]= st.dane[i];
    } 
}
#endif
