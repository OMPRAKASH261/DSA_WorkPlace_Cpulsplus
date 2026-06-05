#include<iostream>
#include<queue>
typedef long long ll;
using namespace std; 

int main(){
    ll x = 10;
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(10);   // 10
    pq.push(20);   // 10
    pq.push(25);   // 10
    pq.push(-6);   // -6
    pq.push(81);   // -6 
    cout<<pq.top()<<endl;  // -6
    pq.pop();  // -6 is removed
    cout<<pq.top()<<endl;  // 10
}