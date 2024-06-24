#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int row_s=0;
    int row_e=n-1;
    int col_s=0;
    int col_e=m-1;

    while (row_s<=row_e && col_s<=col_e){

        // for starting row

        for (int col=col_s;col<=col_e;col++){
            cout<<arr[row_s][col]<<" ";
        }
        row_s++;

        for (int row=row_s;row<=row_e;row++){
            cout<<arr[row][col_e]<<" ";
        }
        col_e--;

        for (int col=col_e;col>=col_s;col--){
            cout<<arr[row_e][col]<<" ";
        }
        row_e--;

        for (int row=row_e;row>=row_s;row--){
            cout<<arr[row][col_s]<<" ";
        }
        col_s++;
    }
}