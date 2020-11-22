#include <iostream>
using namespace std;

int SubFunction()
{
    int first = 100;

    if (first == 10)
    {
        cout << "value of first is 10" << endl;
    }
    else if (first == 20)
    {
        cout << "value o first is 20" << endl;
    }
    else if (first == 30)
    {
        cout << "value o first is 30" << endl;
    }
    else
    {
        cout << "value of first is not matching" << endl;
    }

    cout << "Exact value of  first is : " << first << endl;
    return 0;
}

int main(){
    int i;
    i = SubFunction();
    return 0;
}