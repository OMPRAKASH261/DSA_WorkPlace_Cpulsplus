#include<iostream>
#include<iostream>
using namespace std;
string removeDuplicates(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    s = removeDuplicates(s);
    cout<<s<<endl;
}


// // Steps
// 1. Create stack of char.
// 2. if stack is empty then push from string.
// 3. if stack is not empty thenn we check s[i]=(string index), st.top()= (stack top) both are same we do nothing.
// 4. then we create a new string.
// 5. then empty stack into new string.
// 6. reverse new string.
// 7. return string.