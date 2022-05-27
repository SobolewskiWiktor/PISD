#ifndef znam_bib
#define znam_bib
#include <stdexcept>
using namespace std;
struct Stos 
{
    private:
    struct Node 
    {
        int dane; 
        Node * nast;
        Node (int D, Node * nsat = nullptr);
    }; 
    Node * wierzch; 
    int ile_jest; 

   public:
    Stos();
    void wypisz();
    void wstaw(int a);
    int usun(); 
    int Ile();
};

  Stos::Stos()
  {
      wierzch = nullptr;
      ile_jest = 0; 
  }
  Stos::Node::Node(int D, Node * N)
  {
      dane = D; // utworzenia miejsca w ramce przecowujacego zmienna typu int
      nast = N; // utowrzenie miejsca w ramce przechowującego zmienna zawierajaca adres pamieci
  }
  void Stos::wypisz()
  {
      Node * biegacz;
      biegacz = wierzch;
      cout<<"wierzch --->"; 
      while(biegacz != nullptr)
      {
          cout<< biegacz -> dane <<"--->";// sposob nr 2 na wyciagniecie z ramki o adresie pamieci biegacz czego z pola dane
          biegacz = biegacz -> nast; // sposob nr 2 na wyciagniecie z ramki o adresie pamieci biegacz czego z pola nast
      }
      cout<<"NULL"<<endl;
  }
  void Stos::wstaw(int a)
  {
      
      Node * nowy;
      nowy = new Node (a); 
      nowy -> nast = wierzch; // przypisanie miejscu nast w ramce o naziwe nowy adresu pamieci ramki wierzch
      wierzch = nowy; // przypisanie ramce wierzch adresu ramki nowy 
      ile_jest ++; 
  }
  int Stos::usun()
  {
      int killed;  
      killed = (*wierzch).dane; // sposob nr 1 na wyciagniecie z ramki o adresie pamieci wierzch czegoś z pola dane
      Node * kill; // tworzenie zmiennej przechowującej adres pamięci
      Node * nowy;
      
      nowy = wierzch; 

      kill = wierzch; 
      wierzch = nowy; 
       
      delete kill; 
      ile_jest --; 
      return killed; 
  }
  int Stos::Ile()
  {
      return ile_jest;
  }
#endif
