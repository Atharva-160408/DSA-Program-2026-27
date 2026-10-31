#include<iostream>
using namespace std;
class complex{
    private :
    float real;
    float imag;
    public:
    complex()
    {
    real=0;
    imag=0;
    }
    complex(float r, float i)
    {
    real=r;
    imag=i;
    }
    ~complex()
    {

     }
    void display (void)
    {
    cout<<real<<"+"<<imag<<"j"<<endl;
    }
    };
    int main ()
    {
    complex c1(2.0,5.0);
    cout<<"complex no.is"<<endl;
    c1.display();
    complex c2(7.0,6.4);
    cout<<"complex no.is"<<endl;
    c2.display();
    return (0);
    }
/*
Output:
PS C:\Users\Students> cd "d:\atharvakale\" ; if ($?) { g++ com.cpp -o com } ; if ($?) { .\com }
complex no.is
2+5j
complex no.is
7+6.4j
*/
