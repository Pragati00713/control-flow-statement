#include<iostream>
using namespace std;
int main(){
    char op;
    int num1,num2;
    cout<<"enter two number :";
    cin>>num1<<num2;
    cout<<"enter the oprator(+,-,*,/) :";
    cin>>op;

    switch(op){
        case '+':
        cout<<num1<<"+"<<num2<<"="<<(num1+num2);
        break;
         case '-':
        cout<<num1<<"-"<<num2<<"="<<(num1-num2);
        break;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<(num1*num2);
        break;
         case '/':
        cout<<num1<<"/"<<num2<<"="<<(num1/num2);
        break;

    }

}