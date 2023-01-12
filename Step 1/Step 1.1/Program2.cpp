/*
Take age
1.if age < 18
    print:not eligible for job
2. if age >= 18
    eligible for job

3. if age>=55 & age <=57
    eligible for job, but retirement sonn

4. if age > 57
    print retirement time
*/
#include<iostream>
using namespace std;

int main() {
    int age;
    cin>>age;

    if(age < 18) 
        cout<<"Not Eligible for job";

    else if(age < 55)
        cout<<"Eligible for job";

    else if(age <= 57)
        cout<<"Eligible for job, but retirement is close";

    else 
        cout<<"Retirement Time";
}