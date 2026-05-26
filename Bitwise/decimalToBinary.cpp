#include<iostream>
using namespace std;

string decimal_to_binary(int num){
    string result = " ";
    while(num > 0){
        if(num % 2 == 0){
            // even
            result = "0" + result;
        }
        else{
            // odd
            result = "1" + result;
        }
        num = num >> 1;  // (x >> 1 give x/2, x>>2 give x/2**2, x>>3 give x/2**3.)
    }
    return result;
}
int main(){
    cout<<decimal_to_binary(13)<<"\n";
    return 0;
}