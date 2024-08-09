#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    for (int i =0;i<100;i++){
        cout<<"capa is : "<<v.capacity()<<endl;
        cout<<"size is : "<<v.size()<<endl;
        v.push_back(i+1);
     }
  for (auto x:v){
    cout<<x<<" "<<endl;
  }
}