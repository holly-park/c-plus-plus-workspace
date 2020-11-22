#include <iostream>

using namespace std;

#include <string>

int main(){
    string str1 = "Hello", str2= "World", str3;
    int len;
    str3 = str1;
    cout << "str3: " << str3 << endl;
    str3 = str1 + str2;
    cout << "str1 + str2: " << str3 << endl;
    len = str3.size();
    cout << "str3.size(): " << len << endl;
    string str4 = str3 + to_string(len);
    return 0;
}