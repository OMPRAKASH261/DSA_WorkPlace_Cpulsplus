// Q. Input a string of size n and Update all the even 
//  positions in the string to character 'a'. Consider 0-based indxing.


#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "raghav";
    cout<<str<<endl;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i] = 'a';
    }
    cout<<str<<endl;
}