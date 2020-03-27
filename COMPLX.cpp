#include <iostream>
using namespace std;
class Complx
{
    private:
      float real;
      float imag;
    public:
       Complx(): real(0), imag(0){ }
       void input()
       {
           cout << "Enter real parts of desired complex number : ";
           cin >> real;
           cout << "Enter imaginary parts of desired complex number: ";
           cin >> imag;
       }
       Complx operator - (Complx x2)
       {
           Complx temp;
           temp.real = real - x2.real;
           temp.imag = imag - x2.imag;
           return temp;
       }
       void output()
       {
           if(imag < 0)
               cout << "Output Complex number: "<< real << imag << "i";
           else
               cout << "Output Complex number: " << real << "+" << imag << "i";
       }
};
int main()
{
    Complx x1, x2, result;
    cout<<" please enter first complex number:\n";
    x1.input();
    cout<<"pleaseenter second complex number:\n";
    x2.input();
    difference = x1 - x2;
    difference.output();
    return 0;
}
