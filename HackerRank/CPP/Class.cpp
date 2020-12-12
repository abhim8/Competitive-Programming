#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    int age;
    string first_name;
    string last_name;
    int standard;
    public:
    void set_age(int a){
        age = a;
    }
    void set_standard(int a){
        standard = a;
    }
    void set_first_name(string name1){
        first_name = name1;
    }
    void set_last_name(string name2){
        last_name = name2;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_last_name(){
        return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    string to_string(){
        stringstream s;
        s << age << "," << first_name << "," << last_name << "," << standard;
        string sage, sstandard, str, sfn, sln;
        s >> sage >> sfn >> sln >> sstandard;
        str += sage+sfn+sln+sstandard;
        return str;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
