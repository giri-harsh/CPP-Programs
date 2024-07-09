#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1 = "abc";
    string s2 = "xyz";

    // cout<<s2.compare(s1);
 if (s2.compare(s1)==0)
 cout<<"both strings are same";
 else if( s2.compare(s1)==1){
    cout<<"s1 is smaller than s2";
 }
 else
 cout<<"s2 is smaller than s1";
 
  
}