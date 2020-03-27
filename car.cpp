#include<iostream>
using namespace std;
class car
{
    char c[20],s[10];
    int r;
    public:
    void seven()
    {
        cout<<"Features -> car\n1.colour:RED\n2.battery size:AA\n3.with remote\n";
    }
    void points()
    {
        cout<<"Enter colour \n";
        cin>>c;
        cout<<"Enter battery size\n";
        cin>>s;
        cout<<"Do you want remote?If you want enter 0 lest you can enter any number(1-9)\n";
        cin>>r;
        cout<<"Features -> car\n1.colour:"<<c<<"\n";
        cout<<"2.battery size:"<<s<<"\n";
        if(r==0)
        {
            cout<<"3. wants with remote\n";
        }
        else
        {
            cout<<"3. wants without remote\n";
        }
    }
    void colour()
    {
        cout<<"Enter colour\n";
        cin>>c;
        cout<<"Features of your car\n1.colour:"<<c<<"\n";
        cout<<"2.battery size:AA\n";
        cout<<"3. wants with remote\n";
    }
};
int main()
{
    int n,i;
    car obj;
    cout<<"Enter your true age(7-100)\n";
    cin>>n;
    if(n<7)
    {
        obj.seven();
    }
    else
    {
        cout<<"If you want all the given features of the car enter 0 or if you want the give colour alone enter 1\n";
        cin>>i;
        if(i==0)
        {
            obj.points();
        }
        else if(i==1)
        {
            obj.colour();
        }
        else
        {
            cout<<"SORRY!!!!Invalid input\n";
            exit(0);
        }
    }
}
