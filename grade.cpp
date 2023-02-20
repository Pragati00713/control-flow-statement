#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3,s4,s5;
    cout<<"enter sunject 1 number:" ;
    cin>>s1;
    cout<<"enter sunject 2 number:" ;
    cin>>s2;
    cout<<"enter sunject 3 number:" ;
    cin>>s3;
    cout<<"enter sunject 4 number:" ;
    cin>>s4;
    cout<<"enter sunject 5 number:" ;
    cin>>s5;
    int subtotal= s1+s2+s3+s4+s5;
    int percent=100*subtotal/500;
    if(percent>60){
        cout<<"grade A "<<percent<<"%";}
        else if(percent>=50){
            cout<<"grade B  "<<percent<<"%";}
            else if(percent>=40){
                cout<<"grade C  "<<percent<<"%";}
                else{
                    cout<<"grade D "<<percent<<"%";}  
}