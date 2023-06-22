// Array tutorial
#include <iostream>
using namespace std;

int main(){
    int mark[5]={23,45,56,78,69};
    cout<<"these are Marks"<<endl;
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;
    cout<<mark[4]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"The value of mark "<<i<<" is "<<mark[i]<<endl;
    }
    

    return 0;
}