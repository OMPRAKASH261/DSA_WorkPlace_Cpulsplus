#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // // 1 3 5 7 9 ...
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }
   
   
    // // 1 3 5 7 9 ...
    // int a = 1;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a = a+2;
    // }

    // 4  7 10 13 16 ...
     int a = 4;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a+3;
    }

}