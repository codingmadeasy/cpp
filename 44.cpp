//Multiple Catch Blocks
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    try
    {
        if(n==1)
            throw 0;
        else if(n==2)
            throw 0.0;
        else
            throw '0';
    }
    catch(int k)
    {
        cout<<"Caught Integer"<<endl;
    }
    catch(double k)
    {
        cout<<"Caught Double"<<endl;
    }
    catch(char k)
    {
        cout<<"Caught Character"<<endl;
    }
    cout<<"End of Program";
    return 0;
}
