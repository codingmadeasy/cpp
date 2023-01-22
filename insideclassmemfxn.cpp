// Defining member functions inside the class
#include <iostream>
using namespace std;
class abc
{
    int a,b;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<" a = "<<a<<endl<<" b = "<<b<<endl;
    }
};
int main()
{
    abc ob;
    ob.set(10,20);
    ob.display();
    return 0;
}
