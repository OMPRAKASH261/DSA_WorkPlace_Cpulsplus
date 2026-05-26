// Q.find the doublet in the Array whose sum is equal 
//  to the given vale x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target : ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}

// op=>Enter target : 7
// Enter array size : 8
// Enter array elements : 1 3 2 4 3 4 1 6
// (0,7)
// (1,3)
// (1,5)
// (3,4)
// (4,5)
// (6,7)