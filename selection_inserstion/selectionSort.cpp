#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int arr[] = {5,3,1,4,2};
    int n = 5;
    for(int ele : arr){         // we use 'for-each loop' to print the array.(he say that if we have less knowledge about the array).
        cout<<ele<<" ";
    }
    cout<<endl;
    
    // selection sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;         // only for index checking.
        // minimum element calculation in orange box(given array)
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}

// note : selection sort are unstable algorithm.