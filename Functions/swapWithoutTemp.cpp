#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no : ";
    int a,b;
    cin>>a>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
}