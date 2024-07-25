#include <iostream>
using namespace std;
int sum(int n){
    if (n==0){
        return 0;
    }
    int prevSUM=sum(n-1);
    int result = n +prevSUM;
    // return n+prevSUM;
    return result;
}
int main(){
    int n;
    cin>>n;
   
   cout<<sum(n);
}