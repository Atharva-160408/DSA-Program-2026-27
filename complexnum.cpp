#include<iostream>
using namespace std;
class complex {
private:
float real;
float imag;
public:
complex()
{
    real=0;
    imag=0;
}
complex(float r,float i)
{
    real=r;
    imag=i;
}
~complex()
{  


}
void diaplay(void)
{
    cout<<real<<"+"<<imag<<"i"<<endl;

}
complex operator+(complex c2)
{
float r=real+c2.real;
float i=imag+c2.imag;
return(complex(r,i));
}
complex operator-(complex c2)
{
float r=real-c2.real;
float i=imag-c2.imag;
return(complex(r,i));
}
complex operator*(complex c2)
{
float r=real*c2.real-imag*c2.imag;
float i=real*c2.real+imag*c2.imag;
return(complex(r,i));
}

};
int main()
{
 complex c1(2.0,5.0);
 cout<<"complex no. is"<<endl;
 c1.diaplay();
 
 complex c2(5.0,7.0);
 cout<<"complex no. is"<<endl;
 c2.diaplay();
return(0);

}

//OUTPUT:
PS D:\atharvakale> cd "d:\atharvakale\" ; if ($?) { g++ complexnum.cpp -o complexnum } ; if ($?) { .\complexnum }
complex no. is
2+5i
complex no. is
5+7i
PS D:\atharvakale> 
