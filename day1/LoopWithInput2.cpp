#include <iostream>

using namespace std;

int myfunc(){
    int number1;
    int number2;

    cout << "첫번 째 숫자를 입력하세요: " << endl;
    cin >>  number1;
    cout << "두번 째 숫자를 입력하세요: " << endl;
    cin >> number2;
    cout << "첫번째 숫자: " << number1 << "\t\t\t" << "두번째 숫자: " << number2 << endl;

    for(int a=number1+1; a<number2+1; a=a+1){
        cout << "chocopie" << a << endl;
    }
    return 0;

}

int main(){
    int a;
    a = myfunc();
    return 0;
}
