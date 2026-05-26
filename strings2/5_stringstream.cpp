// Q. Given a sentence, split every single word of the
//  sentence and print in a new line.

#include<iostream>
#include<string>
// #include<algorithm>
// #include<vector>
#include<sstream>
using namespace std;
int main(){
    // string str = "omprakash is  a coder";
    // stringstream ss(str);
    // string temp;
    // while(ss>>temp){
    //     cout<<temp<<endl;
    // }

    string s;
    getline(cin,s);
    string temp;
    stringstream ss(s);
    while(ss>>temp){
        cout<<temp<<endl;
    }
}