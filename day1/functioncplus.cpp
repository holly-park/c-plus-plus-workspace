#include <iostream>

/*This is first comment*/

using namespace std;
int funcInside();    //함수 선언

int main(){
    int i = funcInside();   //함수 지정
    cout << "return value: " << i <<endl; 
    return 0;
}

int funcInside(){     //함수정의
    cout << "test" << endl;
    return 8;
}