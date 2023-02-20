#include<iostream>
using namespace std;
int main(){
    int wd;
    cout<<"enter water consumped :";
    cin>>wd;
    if(wd>45 && wd<=75)
    cout<<"tax rate is Rs 475.00 :";
    else if(wd>75 && wd<=125)
    cout<<"tax rate is Rs 750.00 :";
    else if(wd>125 && wd<=200)
    cout<<"tas rate is Rs 1225.00 :";
    else if(wd>200 && wd<=350)
    cout<<"tax rate is Rs 1650.00 :";
    else if(wd<350)
    cout<<"tax rate is Rs 2000.00 :";
    else{
        cout<<"no tax are applied :";
    }
}