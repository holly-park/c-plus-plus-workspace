#include <iostream>

using namespace std;

int max(int, int);
int main(){
    int number1=100, number2=200, result;
    result = max(number1, number2);
    cout << "Max value is: " << result << endl;
    cout << "Max value is: " << max(number2, number1) << endl;
    return 0;
}

int max(int num_3, int num_4){
    int result;
    if (num_3 > num_4) result = num_3;
    else result = num_4;
    return result;
}