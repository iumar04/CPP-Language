// program to calculate table in c++
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number which table you want";
cin>>n;

int i=1;
do
{
    cout<<n<<"*"<<i<<"=";
    cout<<n*i;
    cout<<"\n";
}while(i<=10);
return 0;
}