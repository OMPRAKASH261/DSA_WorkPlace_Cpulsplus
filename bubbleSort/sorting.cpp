#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter a number : ";
    for(int i=0;i<5;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end()); // O(nlogn) -> time complexity order of nlogn.
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

}