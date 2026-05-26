#include<iostream>
using namespace std;
int gcd(int a, int b){ // T.C = O(log(a+b))
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){ 
    int a = 27;
    int b = 45;
    cout<<gcd(b,a);
}