#include <iostream>
#include <fstream>   
using namespace std;

char a;
string b;
ifstream plik;
int liczb;
int ile = 0;
int cyfr;

void funkc()
{
	plik.open("hasla.txt");  
    if(plik.good())  //sprawdzenie czy plik istnieje
     while(!plik.eof())        //petla wykonuje sie az program dojedzie do konca pliku
                         {
                        plik>>a;
                        b=a;
						
                         if('0'<=a && a<='9')
                         {
                         	liczb++;
                         	ile++;
                         }
						 if(ile == b.length()){
						 	cout<<"haslo zlozone z cyfr"<<endl;
						 	cyfr++;
						 }
						 cout<<b<<" = Ilosc liczb to: "<<ilosc_liczb<<endl;
                         }
    plik.close();
}
int main()
{
	
	
    funkc();  
    return 0;
}
