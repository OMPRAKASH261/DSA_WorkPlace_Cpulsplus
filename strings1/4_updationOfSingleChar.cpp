#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "omprakash";
    cout<<str<<endl;
    str[1] = '4';    // in C++ strings are mutable but not in java.
    cout<<str<<endl;
}