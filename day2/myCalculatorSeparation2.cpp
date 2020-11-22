#include <iostream>
using namespace std;

#include "./myCalculatorSeparation1.cpp"
extern int sum();
extern int sub();
extern int mul();
extern int divi();
extern int calculator();


int main()
{
    int cal;
    while (true)
    {
        cal = calculator();
        cal;
        cout << "계속 하시겠습니까?(Y, N) " << endl;
        char ans;
        cin >> ans;

        if (ans == 'N')
        {
            cout << "종료합니다" << endl;
            break;
        }
    }
}
