#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<"size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    for (int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}