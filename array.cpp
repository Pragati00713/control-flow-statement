#include<iostream>
using namespace std;
int main(){
    int a[5]={34,55,21,3,5},i,sum=0;
    float avg;
    for(i=0;i<5;i++){
        sum=sum+a[i];
        cout<<"element at index"<<i<<"is" <<a[i]<<endl;

    }
    avg=sum/5;
    cout<<"the sum of above number is" <<sum<<endl;
    cout<<"the average of above number is"<<avg<<endl;
    return 0;
}
