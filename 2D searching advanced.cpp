#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cin>>target;
    bool flag=false;

    int row=0;
    int col=m-1;

    while (row<n && col >=0){
        if (arr[row][col]==target){
        flag=true;
        break;}

        else if(arr[row][col]>target){
            col--;
        }
        else if(arr[row][col]<target){
            row++;
        }
    }

    if (flag==true){
        cout<<"element found";
    }
    else {
        cout<<"element not found";
    }
}