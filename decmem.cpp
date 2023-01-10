#include <iostream>
using namespace std;
class abc
{
    public:
    void show();//inside class declaration
};
void abc::show()//outside class definition
{
    cout<<"abc show function";
}
int main()
{
    abc ob;
    ob.show();
    return 0;
}
