#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    if(s.length()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    // string s = "())()(";
    string s = "()()()";
    // string s = "()()(";
    cout<<isBalanced(s);
}


// // Steps
// 1. if you see opening bracket push in stack.
// 2. if you see a closing bracket, stack->top ko dekho, agar->'(' teh st.pop() agar stack empty->false
// 3. if st.size()==0, true. else false