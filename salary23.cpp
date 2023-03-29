//wap to check happy employee salary=800000 happy,500000-800000 average , 500000-unhappy
#include<iostream>
using namespace std;
int main(){
    int sal;
    cout<<"enter employ salary";
    cin>>sal;
    if(sal>=800000){
        cout<<"happy employee";
    }
    else if( sal>=500000){
        cout<<"not happy not sad employess ";
    }
    else if(sal=500000){
        cout<<"unhappy employee";
    }

else{
    cout<<"doughtful employess";
}
}