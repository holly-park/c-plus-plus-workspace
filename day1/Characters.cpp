#include <iostream>

using namespace std;

int main(){
    char ch;
    cin >> ch;
    if (ch == 'N'){
        cout << "Enter again!" << endl;
    }
    cin >> ch;
    cout << "The value of the character is: " << int(ch) << "\t\t firstly you pressed \t\t" << ch << "\t Character!" << endl;
    cin >> ch;
    cout << "The value of the character is: " << int(ch) << "\t\t secondly you pressed \t\t" << ch << "\t Character!" << endl;
    return 0;
}