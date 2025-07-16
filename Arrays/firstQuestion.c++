#include<iostream>
using namespace std;

int findNum(int arr[], int n, int num){
    int occurance = 0;
      for(int i = 0; i < n; i++){
        if(arr[i] == num){
            return occurance;
        }
        occurance += 1;
    }
    return -1;
}



int main(){

    int n = 5;
    int num = 10;
    int arr[n];

    cout << "Enter the value of arr: " << endl;
    for(int i = 0; i <= n; i++){
        cin >> arr[i];
    }

    int ans = findNum(arr, n, num);

    cout << ans;

    //check if num is present or not



}