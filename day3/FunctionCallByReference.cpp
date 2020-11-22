#include <iostream>

using namespace std;



int main(){
    int first = 100, second = 200;
    cout << "Before swap - first, second: " << first << "," << second << endl;
    swap(first, second);
    cout << "After swap - first, second: " << first << "," << second << endl;
    cout << "Before swap by refer - first, second: " << first << "," << second << endl;
    swapByReference(first, second);
    cout << "After swap by refer - first, second: " << first << "," << second << endl;
    return 0;
}
void swap(int x, int y){
    int temp; temp =x; x=y; y=temp;
}
void swapByReference(int &x, int &y){
    int temp; temp =x; x =y; y=temp;
}
