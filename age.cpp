#include<iostream>
using namespace std;
int main(){
    int age;
    string citizen;
    cout<<"enter your age:";
    cin>>age;
    cout<<"enter your citizenship: 'indian or 'other'";
    cin>>citizen;
    if(age>=18 && citizen =="indian"){
        cout<<"you are eligible to cast vote\n";
}
  
    else{
cout<<"you are not eligible to cast vote";
    }
        
    }
    
