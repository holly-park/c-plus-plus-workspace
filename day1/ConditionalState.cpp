#include <iostream>

using namespace std;

int main(){
    int x,y = 10, var;
    if (y<10){
        var=30;
    }else{
        var=40;
    }
    cout << "value of var: " << var << endl;

    x = (y<10) ? 30 : 40;
    cout << "value of x: " << x << endl;
    return 0;
}