#include<iostream>
using namespace std;

void removeChar(string ans, string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch=='a') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));
}

void removeChar2(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='p') removeChar2(ans,original,idx+1);
    else removeChar2(ans+ch,original,idx+1);
}

int main(){
    string str = "om prakash";
    // removeChar("",str);
    removeChar2("",str,0);
}