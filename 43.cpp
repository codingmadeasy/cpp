//Exception Handling Basic Program
#include <iostream>
using namespace std;
int main()
{
    int a=10,b=0;
    try
    {
        if(b==0)
            throw 0;
        cout<<"a/b = "<<a/b<<endl;
    }
    catch(int k)
    {
        cout<<"Divide by Zero Exception"<<endl;
    }
    cout<<"End of Program";
    return 0;
}
