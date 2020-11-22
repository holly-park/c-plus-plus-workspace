#include <iostream>

using namespace std;

int main(){
    int var = 20;
    int *ptr_first;
    ptr_first = &var;
    cout << "var variable: " << var << ", address: " << &var << endl;
    cout << "ptr_first variable: " << ptr_first << ", address: " << &ptr_first << endl;
    cout << "Value of *ptr_first variable: " << *ptr_first << ", address: " << &(*ptr_first);
    return 0;
}