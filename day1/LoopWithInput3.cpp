#include <iostream>

using namespace std;

int Myfunc(){
    int number;
    
    cout << "숫자를 입력하세요: " << endl;
    cin >> number;
    
    for (int a=0; a < number; a=a+1){
        cout << "Lala" << endl;
    }
    return 0;
}

int main(){
    int c;
    c = Myfunc();
    return 0;
}