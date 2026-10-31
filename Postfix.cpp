#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;

class stack
{
    private:
    int a[100];
    int top;
    public:
    stack()
    {
        top=-1;
    }

    void push(int x)
    {
        top++;
        a[top]=x;
    }

    int pop()
    {
        int p=a[top];
        top--;
        return p;
    }
};

int evaluate(char x, int a, int b)
{
    if(x=='+')
    return(a+b);
    else if(x=='-')
    return(a-b);
    else if(x=='*')
    return(a*b);
    else if(x=='/')
    return(a/b);
    else if(x=='%')
    return(a%b);
    else if(x=='$')
    return(pow(a,b));

    return 0;
}

int main ()
{
    stack s;
    char x;
    int a,b;
    cout<<"Enter the postfix expression: "<<endl;

    while((x=getchar())!='\n')
    {
        if(isdigit(x))
        {
            s.push(x-48);
        }
        else
        {
            b=s.pop();
            a=s.pop();
            s.push(evaluate(x,a,b));
        }
    }
    cout<<"Answer: "<<s.pop()<<endl;
    return 0;
}
/*
Output:-
cd "d:\Atharva kale\" ; if ($?) { g++ postfix.cpp -o postfix } ; if ($?) { .\postfix }
Enter the postfix expression: 
623+-382/+*2$3+
Answer: 52

*/
