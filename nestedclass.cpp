#include <iostream>
using namespace std;
class A
{
    public:
    class B
    {
        public:
        void fxn()
        {
            cout<<"Inner Class B";
        }
    };
    void fxn()
    {
        cout<<"Outer Class A"<<endl;
    }
};
int main()
{
    A ob1;
    A::B ob2;
    ob1.fxn();
    ob2.fxn();
    return 0;
}
