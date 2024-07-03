#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool flag=true;

    for (int i=0;i<n;i++){
        if (arr[i] != arr[n-1-i]){
            flag = false;
        }
    }

    if (flag==true){
        cout<<"given word is a palindrome";
    }
    else 
    cout<<"given word not a palindrome";
}