// Q. Write a program to print sum of all the 
//    the elements of a 2D matrix.


#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        } 
    }
    // max
    int sum = 0;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;
}