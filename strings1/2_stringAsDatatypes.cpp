#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "ram is a boy";
    // cout<<str;

    string name;  
    // cin>>name; // only if the given string has no spaces
    getline(cin,name);  // replace for cin 
    cout<<name;
}
//input - ram is a boy
//output - ram is a boy