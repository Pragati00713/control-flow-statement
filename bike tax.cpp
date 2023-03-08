#include<iostream>
using namespace std;
int main(){                                   
    int cp;
    cout<<"enter cost price of your bike:-";
    cin>>cp;
    if(cp>100000){
        cout<<"your tax amount is 15% : Rs"<<cp*0.15;
     
      }
      else if(cp>50000 && cp<=100000){
        cout<<"your tax amount is 10% : Rs" <<cp*0.10;
      }
      else{                     

      
        cout<<"your tax amount is 5% : Rs" <<cp*0.05; }                                      
      
      
      return 0;}


      
