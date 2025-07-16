#include<iostream>
#include<vector>
using namespace std;

int main(){

    // syntax
    // vector<int>vec = {10, 15, 20};
    // vector<int>vec2;
    // int sz = sizeof(vec) / sizeof(int);

    // vector<char>vec = {'a', 'b', 'c', 'd', 'e'};

    // for(char value : vec){
    //     cout << value << endl;
    // }

    // vector functions
    // 1. size

    // vector<int>vec = {2, 45, 2, 3};
    // int sz = vec.size();

    // cout << sz << endl;

    // 2. push_back;

    // vector<int>vec;
    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);
    
    // for(int value : vec){
    //     cout << value << endl;
    // }

    // 3. pop_back

    // vector<int>vec;
    // vec.push_back(25);
    // vec.push_back(35);
    // vec.push_back(45);
    
    // for(int val : vec){
    //     cout << "Before pop " << val << endl;
    // }

    // vec.pop_back();

    // for(int val : vec){
    //     cout << "After pop " << val << endl;
    // }

    //4. front
    
    // cout << vec.front() << endl;

    //5. back

    // cout << vec.back() << endl;

    //6. at

    // cout << vec.at(1) << endl;

    // dynamic memory allocation of vector, (x2 in capacity)

    vector<int>vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

}