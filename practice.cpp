//wap to chaeck to take subject marks from the user 
//marks=90 grade A,marks= 50 grade =b,marks 30 fail
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    if(marks>=90)
    cout<<"grade A";
    else if(marks>=50)
    cout<<"grade B";
    else if( marks>=30)
    cout<<"fail";
    else{
        cout<<"wrong marks type";
    }

    }

    
