#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    vector<int> a[n];
    for(int i = 0; i < n; i++){
        int k;
        cin>>k;
        int m;
        for(int j=0; j<k; j++){
            cin >> m;
            a[i].push_back(m);
        }
    }
    
    int i, j;
    for(int t = 0; t<q; t++){
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
    return 0;
}
