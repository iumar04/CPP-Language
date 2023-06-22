#include <iostream>
using namespace std;

int main(){
    // Pointer is data type which holds the address of other data types
    int a=5;
    int* b=&a;
    // & ----> (address of) operator

    cout<<"the address of a "<<b<<endl;
    cout<<"the address of a "<<&a<<endl;

    //* ----> (value at) dereference operator

    cout<<"the value at address of b "<<*b<<endl;

    // Pointer to Pointer
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}