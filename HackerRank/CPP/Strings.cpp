#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string str1,str2;
    cin>>str1>>str2;
    cout<<(str1.length())<<" "<<(str2.length())<<endl<<(str1+str2)<<endl;
    char c1 = str1[0]; char c2 = str2[0];
    str1[0] = c2; str2[0] = c1;
    cout<<str1<<" "<<str2<<endl;
  
    return 0;
}
