#ifndef znam_bib_2
#define znam_bib_2
using namespace std; 
template<typename typkolosa>
struct Kolejka
{
    private:
      struct Node
      {
          typkolosa dane; 
          Node * nast;
          Node(typkolosa D, Node * N = nullptr)
          {
              dane = D;
              nast = N; 
          }
      };
    public:
      Kolejka() = default; 
      Node * pocz = nullptr; 
      void wpisz(typkolosa a);
      void zapisz();
      void wypisz(); 
    
};
template<typename typkolosa>
void Kolejka <typkolosa> :: wpisz(typkolosa a)
{
   Node * nowy = new Node(a);
   if(pocz == nullptr || a > pocz -> dane)
   {
       nowy -> nast = pocz;
       pocz = nowy; 
   }
   else
   {
       Node * szuk;
       Node * zaszuk;
       szuk = pocz;
       while(szuk != nullptr)
       {
           zaszuk = szuk;
           szuk = szuk -> nast; 
       }
       nowy -> nast = szuk;
       zaszuk -> nast = nowy; 
   }
}
template<typename typkolosa>
void Kolejka <typkolosa> :: wypisz()
{
    Node * biegacz;
    biegacz = pocz;
    while (biegacz != nullptr)
    {
        cout<<biegacz -> dane<<endl;
        biegacz = biegacz -> nast; 
    }
}

template<typename typkolosa>
void Kolejka <typkolosa> :: zapisz() 
{
    ofstream strumien_do_pliku("info.txt", ios::app);
    Node * biegacz;
    biegacz = pocz;
    while (biegacz != nullptr)
    {
       strumien_do_pliku << biegacz -> dane<<endl;
       biegacz = biegacz -> nast;   
    }
    strumien_do_pliku.close();
}


#endif
