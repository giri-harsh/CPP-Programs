#include <iostream>
#include <string>
using namespace std;

class student {
    public :
    string name;
    int age;
    bool gender;

    void print (){
        cout<<"name ="<<name<<endl;
        cout<<"age ="<<age<<endl;
       cout<<"gender ="<<gender<<endl;
    }

};

int main(){
    student arr[3];
    for (int i=0;i<3;i++){
        cout<<"enter name"<<endl;
        cin>>arr[i].name;
        cout<<"enter age"<<endl;
        cin>>arr[i].age;
        cout<<"enter gender"<<endl;
        cin>>arr[i].gender;
    }

    for (int i =0;i<3;i++){
        arr[i].print();
    }
}

//sample input
// a 
// 10
// 0
// b
// 11
// 1
// c
// 12
// 0