//try catch with functions
#include <iostream>
using namespace std;
void area(double r)
{
    if(r<0)
        throw 1;
    else 
        cout<<"Area is "<<3.14*r*r;
}
int main()
{
    double radius;
    cout<<"Enter Radius";
    cin>>radius;
    try
    {
        area(radius);
    }
    catch(int k)
    {
        cout<<"Radius Cannot be Negative"<<endl;
    }
    cout<<"End of Program";
    return 0;
}
