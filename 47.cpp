//Rethrowing Exception
#include <iostream>
using namespace std;
void area (double r)
{
  try
  {
    if (r < 0)
      throw 1;
    else
      cout << "Area is " << 3.14 * r * r;

  }
  catch (int k)
  {
    cout << "Radius Cannot be Negative" << endl;
    throw k;
  }
}

int
main ()
{
  double radius;
  cout << "Enter Radius";
  cin >> radius;
  try
  {
    area (radius);
  }
  catch (int k)
  {
    cout << "Caught rethrown exception" << endl;
  }
  cout << "End of Program";
  return 0;
}
