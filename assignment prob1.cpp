#include<iostream>
using namespace std;
class bangle
{
    public:
    int siz;
    char color[50],make[100];
    void get()
    {
        cout<<"Enter the size of the bangle\n";
        cin>>siz;
        cout<<"Enter the color of the bangle\n";
        cin>>color;
        cout<<"Enter the make of the bangle\n";
        cin>>make;
    }
    
};
int main()
{
    int k,x,y,temp;
    bangle obj[100];
    cout<<"How many bangles you want?\n";
    cin>>k;
    for(x=0;x<k;x++)
    {
        obj[x].get();
    }
    for(x=0;x<k;x++)
    {
        for(y=x+1;y<k;y++)
        {
            if(obj[y].size>obj[y].size)
            {
                temp=obj[x].size;
                obj[x].size=obj[y].size;
                obj[y].size=temp;
            }
        }
    }
    for(x=0;x<k;x++)
    {
       cout<<obj[x].size<<obj[x].colour<<obj[x].make<<"\n";
    }
    for(x=n-1;x>-1;x--)                                
    {
       cout<<obj[x].size<<obj[x].colour<<obj[x].make<<"\n";
    }
}
