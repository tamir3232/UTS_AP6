#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
int i,j,k=0,jarak=1,baris;
    cout<< "masukkan huruf :";
    cin>> baris;
    for(i=baris;i>=1;i--)
    {
     for(j=1;j<=i;j++)
     {
      cout << char(j + 64);     
     }   
  if(i!=baris)
  {
   for(k=1;k<=jarak;k++)
   {
    cout<<" ";
   }
   jarak+=2;
  }
     for(j=i;j>=1;j--)
     {
      if(j!=baris)
      cout << char(j + 64);
     }
     
     cout << "\n";
     
    }
    cout << "\n";
}