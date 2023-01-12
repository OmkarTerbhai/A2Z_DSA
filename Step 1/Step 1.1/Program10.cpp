#include<iostream>
using namespace std;

void doSomething(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    arr[0] += 100;
    cout<<"Inside func " << arr[0] << endl;
}
int main() {
    int arr[5];

    for(int i = 0; i <= 4; i++) {
        cin >> arr[i];
    }

    doSomething(arr, 5);
     cout<<"Inside main " << arr[0]; 
    
}