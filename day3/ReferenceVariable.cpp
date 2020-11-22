#include <iostream>

using namespace std;

int main(){
    int first = 5;
    int &ref_first = first;
    cout << "Value of first: " << first<< ", address: " << &first << endl;
    cout << "Value of first reference: " << ref_first << ", address: " << &ref_first << endl;
    ref_first = 6;
    cout << "Value of first: " << first << ", address: " << &first << endl;
    double second = 11.7;
    double &ref_second = second;
    cout << "Value of second: " << second << endl;
    cout << "Value of second reference: " << ref_second << endl;
    return 0;
}