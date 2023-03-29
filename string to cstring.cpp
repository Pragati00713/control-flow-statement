//string to cstring
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string st1="apple";
    char *st2= &(st1[0]);
    cout<<st2;
}
