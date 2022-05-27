
#ifndef ZNAM_BIB_H // jezeli nie zna tej nazwy to czyta to biblioteke
#define ZNAM_BIB_H // delaruje nazwe ZNAM_BIB_H jako deklaracje prepocesora przez co biblioteka jest czytana tylko raz.
using namespace std;
struct osoba { // ceklarowanie sturktury (szablonu) o nazwie osoba 
        string imie; // deklarowanie zmiennej identyfikujacej o nazwie imie
        string nazwisko;
        int pesel[11];
        int wzrost;
    };
    // tworzenie obiektu 

    void wypisz (osoba x)
 {
     cout<<x.imie<<" "<<x.nazwisko<<endl; 
     cout<<"pesel to: ";
     for(int i=0; i<11; i++)
     {
        cout<<x.pesel[i]<<" ";
     }
     cout<<endl;
     cout<<"Wzrost to: "<<x.wzrost<<endl; 

 }
  bool czy_kobieta (osoba x)
  {
     if (x.pesel[9] % 2 == 0)
     {
         return true;
     } 
     else{
         return false; 
     }
  }
  void pobierz(osoba &x)
  {
      string P; 
      cout<<"Podaj imie:"<<endl;
      cin>>x.imie;
      cout<<"Podaj naziwsko";
      cin>>x.nazwisko; // przypisanie wartosci dla zmiennej nazwisko dla obiektu o nazwie podanej jako zmienna x
      cout<<"Podaj pesel: ";
      cin>>P;
      for (int i=0 ; i<11; i++) // petla zamieniajaca z strina czyli z tablicy char na tablice int 
      {
        x.pesel[i] = P[i] - '0'; 
      }
      cout<<"Podaj wzrost";
      cin>>x.wzrost;
  }
  struct grupa
  {
      int osoba_w_grupie[30];
      int ilu_jest = 0; 

  };
  
#endif 
