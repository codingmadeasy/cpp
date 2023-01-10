#include <iostream>
using namespace std;
class abc
{
    public:
    static int a;//static variable declaration shared by all objects
    static void display()
    {
        cout<<"a = "<<a<<endl;
        a++;
    }
};
int abc::a=10;// definition and initial value
int main()
{
    abc ob1,ob2;
    abc::display();//accessing member function using scope resolution operator
    cout<<"a = "<<abc::a;//accessing data member using scope resolution operator
    return 0;
}
