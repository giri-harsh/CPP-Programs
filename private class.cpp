#include <iostream>
#include <string>
using namespace std;
class student {
    string name;
    int age;
    bool gender;
    //everything above this is private can only br accessed within the fucntion or class
    public:


    //these function will allow to access private elements
    void setname (string s){
        name = s;
    }
    void setage(int a){
        age = a;
    }
    void setgender(bool g){
        gender = g;
    }

    //to print the info

    void print(){
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
    }


};

int main(){
    string s;
    int a;
    bool g;    
    student arr[3];

    for (int i=0;i<3;i++){
        cin>>s;
        arr[i].setname(s);
        cin>>a;
        arr[i].setage(a);
        cin>>g;
        arr[i].setgender(g);
    }

    for (int i =0;i<3;i++){
        arr[i].print();
    }

}