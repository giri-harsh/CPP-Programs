#include <iostream>
using namespace std;

int lastocc(int arr[],int n,int i,int key){
    if (i==n)
    return -1;

    int rest_arr = lastocc(arr,n,i+1,key);
    if (rest_arr != -1)
    return rest_arr; 
    if (arr[i]==key)
    return i;

    return -1;
}

int main(){
    int arr[]={4,2,1,2,3,2,5,2};
    cout<<lastocc(arr,8,0,2);

}