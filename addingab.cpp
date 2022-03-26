#include <iostream>
#include <cmath>
using namespace std;

double Sumof(double number1, double number2)
{
    double sum=0;
    for(double i=number1;i<

    =number2;i++)
    {
        sum=sum+i;

    }
    return sum;
}

double Sum(double number1,double number2);
double Sub(double number1,double number2);
double Mul(double number1,double number2);
double Div(double number1,double number2);
int main()
{
    double a,b,sum,sub,mul,div;
    while(true){
    cin>>a>>b;
    if(a==0 || b==0){break;}
    sum = Sum(a,b);
    cout<<a<<"+"<<b<<"="<<sum<<endl;
    sub = Sub(a,b);
    cout<<a<<"-"<<b<<"="<<sub<<endl;
    mul = Mul(a,b);
    cout<<a<<"*"<<b<<"="<<mul<<endl;
    div = Div(a,b);
    cout<<a<<"/"<<b<<"="<<div<<endl<<endl;

    cout<<Sumof(a,b)<<endl;
    }
}
double Sum(double number1,double number2)
{
    double sum = number1+number2;
    return sum;
}
double Sub(double number1,double number2)
{
    double sub = number1 - number2;
    return sub;
}
double Mul(double number1,double number2)
{
    double mul = number1 * number2;
    return mul;
}
double Div(double number1,double number2)
{
    double div = number1 / number2;
    return div;
}


