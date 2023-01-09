#include <iostream>
using namespace std;
int a=100;// global variable
int main()
{
    int a=50;//local variable it will hide global a
    cout<<"a = "<<a;//it will print value of local a i.e. 50
    return 0;
}
