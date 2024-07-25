#include <iostream>
#include <vector>
using namespace std;
void printvector (vector<int>b){
    for (int i = 0;i<b.size();i++){
        cout<<b[i]<<" "<<endl;
    }
}
int main(){
    vector <int> v(4);
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    for (int i = 0 ;i < v.size();i++){
        cout<<v[i]<<" "<<endl;
    }

    cout<<"adding few more elements"<<endl;
    v.push_back(5);
    v.push_back(6);
    cout<<v.front();
    cout<<v.back();
    cout<<v.at(2)<<endl;
    // printvector(v);


}