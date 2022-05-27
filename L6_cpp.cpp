#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream strumien_do_pliku("plik.txt", ios::app); // otwieranie łącza do  zapisu pliku
  strumien_do_pliku<<"tekst";// dopisanie do pliku  napisu 
  strumien_do_pliku<<endl;
  strumien_do_pliku<<12.7;
  strumien_do_pliku.close();// zamkniecie łącza do zapisu 
  ifstream strumen_z_pliku("plik.txt"); // otwarcie łącza do odczytu pliku
  if(!strumen_z_pliku) // sprawdzenie czy plik istnieje
  {
      cout<<"BLAD! - brak pliku"<<endl;
  }
  string x;
  double y;
  double z;
  string s;

  strumen_z_pliku>>x;// wywołanie linii do zmiennej, aby wyświetlić te linie
  strumen_z_pliku>>y;
  cout<<"Z pliku"<<endl;
  cout<<x<<endl;// wyświetlenie zmiennej
  cout<<y<<endl;
  strumen_z_pliku.close();// zamknięcie łącza do odczytu
    return 0; 
}
