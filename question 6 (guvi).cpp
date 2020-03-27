#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string arra[a];
    int posrn[a],pos2[a],sizrn=0,siz2=0;
    for(int j=0;j<n;j++)
     {
         cin>>arra[j];
         if(arra[j].substr(0,2)=="rn")
         {
             posrn[sizrn]=j;
             sizrn++; 
         }   
         if(arra[j].length()==2)
         {
             pos2[siz2]=j;
             siz2++; 
         }
     }
    for(int j=0;j<siz2;j++)
     {
         cout<<arra[pos2[j]]<<"\n";
     }
    for(int j=0;j<sizrn;j++)
     {
         cout<<arra[posrn[j]]<<"\n";
     }
    return 0; 
}
