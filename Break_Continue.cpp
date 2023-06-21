#include <iostream>
using namespace std;

int main(){
    // Break Statement
    for (int i = 0; i < 40; i++)
    {
        cout<<i<<endl;
        if(i==10){
            break;
        }
    }
    cout<<"\n";
    // Continue Statement
    for (int j = 0; j < 40; j++)
    {
        if(j==10){
            continue;
        }
        cout<<j<<endl;
        

    }
    
    

    return 0;
}