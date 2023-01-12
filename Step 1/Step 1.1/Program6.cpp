#include<iostream>
using namespace std;

int main() {
    string s = "Omkar";

    s[s.length() - 1] = 'g';
    cout<<s;
}