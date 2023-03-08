#include<iostream>
using namespace std;
int main()
{
    int a=90;
    int b=120;
    cout<<"before swap a="<<a<<"b="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap a="<<a<<"b="<<b;

}