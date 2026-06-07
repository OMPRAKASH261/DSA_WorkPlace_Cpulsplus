#include<iostream>
using namespace std;
class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi> pq; // maxheap (max size is k)
        for(int ele : arr){
            int distance = abs(x-ele);  // abs make if value is (-) make to (+).
            pq.push({distance, ele});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    return 0;
}