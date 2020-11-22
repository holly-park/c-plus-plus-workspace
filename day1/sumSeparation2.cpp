#include <iostream>

using namespace std;

#include "./sumSeparation1.cpp"
extern int sum();

int sum(int num1, int num2);
int main(){
    int num1 = 100, num2 = 200, num3 = 300, result;
    result = sum(num1, num2);
    cout << "Total value is : " << result << endl;
    cout << "Total value is : " << sum(num2, num3) << endl;
    return 0;
}