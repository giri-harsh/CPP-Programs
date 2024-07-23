#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //output
    for (int i =0;i< v.size();i++){
        cout<<v[i]<<endl;
    }

    //to iterate through vector
    vector <int>::iterator it;
    for (it = v.begin(); it!= v.end();it++){
        cout<<*it<<endl;
    }

    //to traverse vector

    for (auto element:v){
        cout<<element<<endl;
    }
    }
