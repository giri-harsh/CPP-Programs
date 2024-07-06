#include <iostream>
using namespace std;
 
void swap (int *a ,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int a = 2;
    int b=4;
    cout<<"original value of a and b is "<<endl<<a<<" "<<b<<endl;

    int *ap = &a;
    int *bp = &b;

    swap(*ap , *bp );
    cout<<"interchanged value of A nd B is "<<endl<<a<<" "<<b;
    
}