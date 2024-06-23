#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"enter first number "<<endl;
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;

    char op;
    cout<<"choose an operation"<<endl<<"+ or - or x or / ";
    cin>>op;

    int result=0;

    switch (op)
    {
    case '+':
        result = num1+num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case 'x':
        result = num1*num2;
        break;
        case '/':
        result = num1/num2;
        break;
    
    default:
    cout<<"Error:Invalid operation";
        break;
    }

    cout<<"result of operation is "<<result;

}