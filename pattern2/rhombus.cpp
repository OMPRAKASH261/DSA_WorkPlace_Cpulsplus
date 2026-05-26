#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // Spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // Stars
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;

    }
    
}