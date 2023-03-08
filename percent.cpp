#include<iostream>
using namespace std;
int main(){
    int per;
    cout<<"enter your percantage :";
    cin>>per;
    if(per<=33){
        cout<<"work hard fail"<<per<<"%";}
        else if( per>33 && per<=60){
            cout<<"good - pass in second devision"<<per<<"%";
        }
    else{
        cout<<"very good- pass in first devision"<<per<<"%";

    }
if(per>=75){
    cout<<"distincton"<<per<<"%";
}
}