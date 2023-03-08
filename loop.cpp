#include<iostream>
using namespace std;
int main(){
    int i,sum=0,n;
    cout<<"enter range";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
        sum=sum+i;

    }
    cout<<"total number is"<<sum;
    return 0;
}
