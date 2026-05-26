#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "Om prakash";
    p1.second = 47;
    m.insert(p1);

    m["Harsh"] = 56;   // best method to insert
    m["vihay"] = 35;

    
    // for(pair<string,int> p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

    m.erase("Harsh");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

}
