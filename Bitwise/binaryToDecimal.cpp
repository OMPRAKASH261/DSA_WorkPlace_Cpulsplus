#include<iostream>
using namespace std;

int binary_to_decimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i = n - 1; i>= 0; i--){
        char ch = binary[i];
        int num = ch - '0';
        result = result + num*(1 << (n - i - 1));  //use left shift operator ex: 1<<2 give 2**n
    } // (x << 1 give x*2,  x<<2 give x*2**2,  x<<3 give x*2**3)
    return result;
}
int main(){
    string str = "001011";
    cout<<binary_to_decimal(str)<<"\n";
    return 0;
}