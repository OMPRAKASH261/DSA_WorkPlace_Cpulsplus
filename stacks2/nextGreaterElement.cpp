#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Next greater Element array
    int nge[n];
    // for(int i=0;i<n;i++){
    //     nge[i] = -1;
    //     for(int j=i+1;i<n;j++){
    //         if(arr[j]>arr[i]){
    //             nge[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    // Using a stack : pop, ans, push & reverse traverse
    // SC = O(n), TC = O(n)
    stack<int> st;
    nge[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        // pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0) nge[i] = -1;
        else nge[i] = st.top();
        // push the arr[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}


// // Step
// 1. Give -1 in last elemnet.
// 2. Crate an empty stack.
// 3. traverse arrary from last.
// 4. comapare each element one by one to remaning travarse element.
// 5. if it is greater element in stack then push in stack.
// 6. otherwise pop and remove until is less then stack from elemnent.