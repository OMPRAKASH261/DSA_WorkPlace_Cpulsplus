#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int* p = &x;
    cout<<x<<endl;
    *p = 6;
    cout<<x;
}