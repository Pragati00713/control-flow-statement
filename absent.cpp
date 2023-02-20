#include<iostream>
#include<string>
using namespace std;
int main(){
    int p,a;
    cout<<"enter your total number of days in present:";
    cin>>p;
    cout<<"enter your number of days in absent:";
    cin>>a;
    int totaldays=p+a;
    int persent=totaldays*p/100;
    if(persent>=75){
        cout<<"you allowed to sit in exam present:"<<persent<<"%";

    }

else{
    cout<<"you are not allowed to sit in exam absent:"<<a<<"%";
}
}
