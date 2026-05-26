#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter row of 1st martix : ";
    cin>>m;
    int n;
    cout<<"Enter colums of 1st matrtix : ";
    cin>>n;
    int p;
    cout<<"Enter rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter colums of 2nd matrix : ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter elements of 1st matrix : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter elements of 2nd matrix : ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        // resulant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                // res[i][j] = a[i][0]*b[0][j] + a[i][j]
                for(int k=0;k<p;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        // print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
     }
     else{  // n!=p
        cout<<"The matrix cannot be multiplied";
     }
}