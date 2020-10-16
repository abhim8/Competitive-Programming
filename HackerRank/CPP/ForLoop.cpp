#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    char str[][100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a; i<=b; i++){
        if(i<=9){
            cout<<str[i]<<endl;
        }
        else {
            if(i&1)
                cout<<"odd"<<endl;
            else
                cout<<"even"<<endl;
        }
    }
    return 0;
}
