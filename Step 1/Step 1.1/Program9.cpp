#include<iostream>
using namespace std;

void doSomething(string &s) {
    s[2] = 't';
    cout<<s<<endl;
}
int main() {
    string s = "Omkar";
    cout<<"Before Func Call "<<s<<endl;
    doSomething(s);
    cout<<"After Func Call "<<s<<endl;

}