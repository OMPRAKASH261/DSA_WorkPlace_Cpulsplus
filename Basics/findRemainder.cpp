#include<iostream>
using namespace std;
int main(){
    int a = 14; // a means dividend
    int b = 3;  // b means divisor
    int q = a/b; // q us quotient
    int r; // r is remainder
     // a = (b*q)+r
     r = a - (b*q);
     cout<<r;

}