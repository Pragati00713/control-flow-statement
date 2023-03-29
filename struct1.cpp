#include<iostream>
using namespace std;
struct employees{
    int empid;
    char name[7];
    int salary;
};
int main(){
    struct employees employee[5]={{1,"priya",20000},{2,"aman",15000},{3,"pooja",12000},{4,"sonu",10000},{5,"alka",8000}};
    cout<<employee[1].empid<<endl;
    cout<<employee[1].name<<endl;
    cout<<employee[1].salary<<endl;
return 0;
}