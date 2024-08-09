#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back (20);
    v.push_back(30);

    cout<<"size : "<<v.size()<<endl;
    cout<<"capa : "<<v.capacity()<<endl;

    

    cout<<"new elements are "<<endl;
      for (int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}