#include <iostream>
using namespace std;
class abc
{
    public:
    static int a;
    static void display()
    {
        cout<<"a = "<<a<<endl;
        a++;
    }
};
int abc::a=10;
int main()
{
    abc ob1,ob2;
    abc::display();
    cout<<"a = "<<abc::a;
    return 0;
}
