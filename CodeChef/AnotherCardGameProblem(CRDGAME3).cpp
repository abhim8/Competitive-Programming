#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
   {
   	ll pc,pr;
   	cin>>pc>>pr;
   	ll movC=ceil((double)pc/9.0);
   	ll movR=ceil((double)pr/9.0);
   	if(movR<=movC)
   	cout<<"1 "<<movR<<"\n";
   	else
   	cout<<"0 "<<movC<<"\n";
   }
}