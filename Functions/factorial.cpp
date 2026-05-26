#include<iostream>
using namespace std;
int fact(int n){
    int fact =1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    cout<<"Enter no : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fact(i)<<endl;
    }
}


  // second method=>

// int main(){
//     cout<<"Enter no : ";
//     int n;
//     cin>>n;
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact *= i;
//         cout<<fact<<endl;
//     }
// }