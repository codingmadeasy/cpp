// Defining member functions outside the class
#include <iostream>
using namespace std;
class abc
{
    int a,b;
    public:
    void set(int,int);
    void display();
};
void abc::set(int x,int y)
{
    a=x;
    b=y;
}
void abc::display()
{
    cout<<" a = "<<a<<endl<<" b = "<<b<<endl;
}
int main()
{
    abc ob;
    ob.set(10,20);
    ob.display();
    return 0;
}
