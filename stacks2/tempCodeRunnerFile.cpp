 // // Using a stack : pop, ans, push & reverse traverse
    // // SC = O(n), TC = O(n)
    // stack<int> st;
    // nge[n-1] = -1;
    // st.push(arr[n-1]);
    // for(int i=n-2;i>=0;i--){
    //     // pop all the elements smaller than arr[i]
    //     while(st.size()>=0 && st.top()<=arr[i]){
    //         st.pop();
    //     }
    //     // mark the ans in nge array
    //     if(st.size()==0) nge[i] = -1;
    //     else nge[i] = st.top();
    //     // push the arr[i]
    //     st.push(arr[i]);
    // }