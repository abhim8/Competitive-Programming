#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    while(m!=0 && n!=0){
	        if(m>n)
	        m-=n;
	        else
	        m=0;
	        
	        n=n/2;
	    }
	    if(m)
	    cout<<0<<endl;
	    else
	    cout<<1<<endl;
	}
	return 0;
}
