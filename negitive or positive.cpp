#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number :";
    cin>>num;
    switch(num>0){
        case 1 : cout<<"number is positive";
        break;
        case 0: switch (num<0){
            case 1 : cout<<"number is negtive";
            break;
            case 0: cout<<"zero";
            break;
        }
    }
}