#include<iostream>
using namespace std;
int main(){
    double sal, year,bonus;
    cout<<"enter your salary:";
    cin>>sal;
    cout<<"enter your work of experience:";
    cin>>year;
    if(year>=5){
        bonus=sal*0.05;
        cout<<"your bonus is  " <<bonus<<endl;
        cout<<"now net salary is  "<<sal+bonus<<endl;}
        else{
            cout<<"you are not eligible to got a bonus\n";
            cout<<"now net salary is "<<sal<<endl;

        }


    }
