#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;
int main()
{
    string strn;
    getline(cin,strn);
    int s=strn.size(),i=0,max=0,w=0,lc=0,tr[s],sc=0;
    while(i<s)
     {
      if(strn[i]==' '||i==(s-1))
       { 
           tr[w]=i-lc;
           if(w>0)
           tr[w]=i-lc+1;
           w++;
           lc=0;
           sc++;
       }
      i++;
      lc++;
     }
     int ss[w];
     for(i=1;i<w;i++)
     {
         ss[i-1]=tr[i]-tr[i-1]-1;
     }
     ss[w-1]=strn.size()-tr[w-1];
     int x,x1;
     cout<<"\n";
     for(i=0;i<w;i++)
      {
          for(int j=0;j<w;j++)
           {
               if(ss[j]>maxi)
               { 
                   maxi=ss[j];
                   x=tr[j];
                   x1=j;
               }
           } 
          cout<<strn.substr(x,maxi)<<" "; 
          ss[x1]=0;
          maxi=0;
      }
    return 0;
}
