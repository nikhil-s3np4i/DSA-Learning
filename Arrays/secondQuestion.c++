#include<iostream>
using namespace std;

int main() {

    int arr[5];
    int sum = 0;
    cout << "Enter the value of arr: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    
    cout << sum;

    return 0;
}