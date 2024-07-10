#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="nincompoop";
    cout<<s1<<endl;
    cout<<"inserted string is "<<endl;
    s1.insert(2, " hello world ");
    cout<<s1;
}