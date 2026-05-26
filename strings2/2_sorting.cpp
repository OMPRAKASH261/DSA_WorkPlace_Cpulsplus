#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s;
}    // sort -> ascii values ke order me sort karke de dega.

// i/p = rahul
// o/p = ahlru