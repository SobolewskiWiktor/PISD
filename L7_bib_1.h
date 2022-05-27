#ifndef znam_bib
#define znam_bib
#include <stdexcept>
using namespace std;
template <typename JakisTyp>
struct Lista
{
    private:
       struct Node
       {
           JakisTyp dane;
           Node * nast;
           Node(JakisTyp D, Node * N = nullptr)
           {
               dane = D; 
               nast = N;
           }
       };
       Node * pocz = nullptr;
       int ile_jest = 0;

    public:
     Lista() = default;
     void wypisz();
     void wstaw(JakisTyp a); 
     void usun_co_Nty(int N);
};
template <typename JakisTyp>
void Lista <JakisTyp> :: wypisz()
{
    Node * biegacz;
    biegacz = pocz; 
    while(biegacz != nullptr)
    {
        cout<< biegacz -> dane << endl; 
        biegacz = biegacz -> nast; 
    }
}
template <typename JakisTyp>
void Lista <JakisTyp> :: wstaw(JakisTyp a)
{
    if(pocz == nullptr || a <= pocz -> dane)
    {
      Node * nowy = new Node (a);
      nowy -> nast = pocz; 
      pocz = nowy;
      ile_jest ++; 
    }
    else
    {
    Node* nowy = new Node (a);
        Node * zaszuk = nullptr; 
        Node * szuk = pocz; 
        while (szuk !=nullptr && szuk->dane < a)
        {
            zaszuk = szuk; 
            szuk = szuk->nast; 

        }
        zaszuk->nast = nowy;
        nowy->nast = szuk; 
    }
}
template <typename JakisTyp>
void Lista <JakisTyp> :: usun_co_Nty(int N)
{
    
}

#endif
