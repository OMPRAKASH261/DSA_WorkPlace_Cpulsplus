#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd numner : ";
    cin>>c;
   if((a+b>c) && (b+c>a) && (c+a>b)){
    cout<<a<<","<<b<<","<<c<<" can be the sides of triangle";
   }
   else{
    cout<<"Invalid Triangle";
   }
}