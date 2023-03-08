#include <iostream>
#include <string>

using namespace std;
int main()
{
    int num1,num2;
    string que;
    bool run=true;
       
    do{
        cout<<"enter first number";
        cin>>num1;
        cout<<"enter second number";
        cin>>num2;
        cout<<"sum of two number is  "<<num1+num2;
        cout<<"you want to run this program again or not?";
        cin>>que;
        if (que == "not") run=false;
        
    
    } while (run == true);

    
    return 0;
}