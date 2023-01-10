#include <iostream>
using namespace std;
int a=100;// global variable
int main()
{
    int a=50;//local variable it will hide global a
    cout<<"a = "<<a;<<endl//it will print value of local a i.e. 50
    cout<<"a = "<<::a;//it will print value of global a i.e. 100
    return 0;
}
