#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Cost Price : ";
    int cp;
    cin>>cp;
    cout<<"Enter the Selling Price : ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    if(sp<cp){
        cout<<"loss = "<<cp-sp;
    }
    if(sp==cp){
        cout<<"No Profit, No Loss!";
    }
}