#include <iostream>
using namespace std;
int first_occ(int arr[],int n,int i,int key){
    if (i==n)
    return -1;
    if (arr[i]==key)
    return i;

    return first_occ(arr,n,i+1,key);
}
int last_occ(int arr[],int n,int i,int key){
    if (i==n){
        return -1;
    }
    int rest_arr = last_occ(arr,n,i+1,key);
    if (i != key)
    return rest_arr ;
    if (i==key){
        return i;
    }

    return -1;

}

int main(){
    int arr[]={4,2,1,2,3,2,5,2};
    cout<<"first occurance is "<<first_occ(arr,8,0,2)<<endl;
    cout<<"last occurance is "<<last_occ(arr,8,0,2);
}