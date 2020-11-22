#include <iostream>

using namespace std;

int main(){
    int first;
    for (first=10; first<20; first=first+1){
        cout << "value of first: " << first << endl;
        if (first>16){
            break;
        }
    }
    cout << "Final value: " << first << endl;
    return 0;
}