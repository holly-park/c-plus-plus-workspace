#include <iostream>

using namespace std;

#include "./separation1.cpp"
extern int funcOutside();

int i = 5;
int main(){
    int i = funcOutside();
    cout << "함수 안: " << i << endl;
    cout << "::을 사용한 함수 밖: " << ::i << endl;  //::  는 안에 있는 i가 아니라는 뜻
    return 0;
}
