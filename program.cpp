#include <iostream>
using namespace std;
int main()
{
    int t,num , odd_sum=0,even_sum=0;
    cout << "enter no of times:-";
    cin >> t;

    for(int i=1;i<=t;i++){
         cout << "enter Your number:-";
        cin>> num;

    if (num % 2 == 0)
    {
        cout << num << "number is even\n";
        even_sum +=num;
    }
    else{cout<<num<<"number is odd\n";
         odd_sum +=num;
    }
    }
    cout << "sum of Even Numbers:-"<< even_sum;
    cout << "\nsum of odd Numbers:-"<< odd_sum;
    return 0;
}