#include<iostream>
#include<queue>
using namespace std; 

int main(){
    priority_queue<int> pq;
    pq.push(10);  
    pq.push(20);
    pq.push(25);
    pq.push(-6);
    pq.push(81);
    cout<<pq.top()<<endl;  // 81
    pq.pop();  // 81 is removed
    cout<<pq.top()<<endl;  // 25
}