#include <iostream>;
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    //searching

    int key;
    cin>>key;

    bool flag=false;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<i<<" "<<j;
                flag=true;                    
            }
        }
    }

    if (flag==true){
        cout<<" element is found";
    }
    else if( flag==false){
        cout<<" element not found";
    }
}