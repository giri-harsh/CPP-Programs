#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int val;
    vector <int> v;
   for (int i = 0;i<n;i++){
         cin>>val;
        v.push_back(val);
    }
      for (int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    vector <int> v2(n);
    for (auto x:v2)
    cin>>x;

    for (auto x:v2)
    cout<<x;
}   
