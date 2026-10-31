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

/*
Output:
S D:\atharvakale> > cd "d:\atharvakale\" ; if ($?) { g++ complex.cpp -o complex } ; if ($?) { .\complex }
complex no. is
2+5i
complex no. is
5+7i


*/
