#include<iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>
#include <fstream>
#include <string>
#include"bib1.h"
#include"bib2.h"
using namespace std;
int main()
{
    int wybor;
    Kolejka <Student> jeden;
    while (true)
    {
        cout<<"MENU"<<endl;
        cout<<"1.POBIERZ"<<endl;
        cout<<"2.POKAZ POBRANE"<<endl;
        cout<<"3.EKSPORTUJ"<<endl;
        cin >> wybor; 
    
    switch (wybor)
    {
    case 1:
    {
     ifstream strumen_z_pliku("GRA.txt");
     if(!strumen_z_pliku)
     {
         cout<<"[ERROR] - BRAK PLIKU NR 1"<<endl;
     }
     else
     {
      string linia;
      string nazwisko;
      string imie;
      string drugie_imie;
      string index;
      string ocena; 
      string temp = ""; 
      int ile_spacji = 0; 
      do
      {
          getline(strumen_z_pliku, linia);
          int dlugosc; 
          dlugosc = linia.length();
          for(int i=0; i<= dlugosc; i++)
          {
              if(linia[i] == ' ')
              {
                  ile_spacji ++;
                  if(ile_spacji == 1)
                  {
                     for(int h=0; h<i; h++)
                     {
                       temp.push_back(linia[h]);
                     }
                     nazwisko = temp;
                     temp = "";
                     int p = i+1; 
                     while (linia[p] != ' ')
                     {
                         temp.push_back(linia[p]);
                         p++;
                     }
                      drugie_imie = temp;
                      temp = ""; 
                     
                  }
                  else if(ile_spacji == 2)
                  {
                     int p = i+1; 
                     while(linia[p] != ' ')
                     {
                         temp.push_back(linia[p]);
                         p++;
                     }
                      imie = temp;
                      temp = "";

                  }
                  else if(ile_spacji == 3)
                  {
                     int p = i+1; 
                     while(linia[p] != ' ')
                     {
                         temp.push_back(linia[p]);
                         p++;
                     }
                      index = temp;
                      temp = "";  
                  }
                  else if(ile_spacji == 4)
                  {
                   int p = i+1; 
                     while(p != dlugosc)
                     {
                         temp.push_back(linia[p]);
                         p++;
                     }
                      ocena = temp;
                      temp = ""; 
                  }
                  else if(ile_spacji == 5)
                  {

                  }
              }
          }
          Student pierwszy (index, ocena, nazwisko, imie, drugie_imie);

          jeden.wpisz(pierwszy);
          
          ile_spacji = 0; 
      }
      while(!strumen_z_pliku.eof());
      strumen_z_pliku.close();
     }

     ifstream strumen_z_pliku_2("SID.txt");
     if(!strumen_z_pliku_2)
     {
         cout<<"[ERROR] - BRAK PLIKU NR 2"<<endl;
     }
     else
     {
      string linia;
      string nazwisko;
      string imie;
      string drugie_imie;
      string index;
      string ocena; 
      string temp = ""; 
      int ile_spacji = 0; 
      do
      {
          getline(strumen_z_pliku_2, linia);
          int dlugosc; 
          dlugosc = linia.length();
          for(int i=0; i<= dlugosc; i++)
          {
              if(linia[i] == ' ')
              {
                  ile_spacji ++;
                  if(ile_spacji == 1)
                  {
                     for(int h=0; h<i; h++)
                     {
                       temp.push_back(linia[h]);
                     }
                     nazwisko = temp;
                     temp = "";
                     int p = i+1; 
                     while (linia[p] != ' ')
                     {
                         temp.push_back(linia[p]);
                         p++;
                     }
                      drugie_imie = temp;
                      temp = ""; 
                     
                  }
                  else if(ile_spacji == 2)
                  {
                     int p = i+1; 
                     while(linia[p] != ' ')
                     {
                         temp.push_back(linia[p]);
                         p++;
                     }
                      imie = temp;
                      temp = "";

                  }
                  else if(ile_spacji == 3)
                  {
                     int p = i+1; 
                     while(linia[p] != ' ')
                     {
                         temp.push_back(linia[p]);
                         p++;
                     }
                      index = temp;
                      temp = "";  
                  }
                  else if(ile_spacji == 4)
                  {
                   int p = i+1; 
                     while(p != dlugosc)
                     {
                         temp.push_back(linia[p]);
                         p++;
                     }
                      ocena = temp;
                      temp = ""; 
                  }
                  else if(ile_spacji == 5)
                  {

                  }
              }
          }
          Student pierwszy (index, ocena, nazwisko, imie, drugie_imie);

          jeden.wpisz(pierwszy);
          
          ile_spacji = 0; 
      }
      while(!strumen_z_pliku_2.eof());
      strumen_z_pliku_2.close();
     }
     break;
    }
    case 2:
    {
        jeden.wypisz();
        break;
    }
    case 3:
    {
      jeden.zapisz();
    }
    }
    }
    return 0; 
}
