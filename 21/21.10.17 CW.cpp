#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float  a=0, b, c, D, x1, x2, x;

  cout <<"Input a, b and c" << endl;
  cin >> a >> b >> c;
  if(a != 0)
  {
   if(b != 0)
   {
    if(c != 0)
    {
      D = b * b - 4 * a * c;
      x1 = (-b - sqrt(D)) / (2 * a);
      x2 = (-b + sqrt(D)) / (2 * a);
      if(D < 0)
        cout << "incorrect numbers";
      if(D >= 0)
        cout << x1 << endl << x2 << endl;
    }
    else

      D = b * b - 4 * a * c;
      x1 = (-b - sqrt(D)) / (2 * a);
      x2 = (-b + sqrt(D)) / (2 * a);
      if(D < 0)
        cout << "incorrect numbers";
      if(D >= 0)
        cout << x1 << endl << x2 << endl;
   }
  }
  else
    if(b != 0)
    {
      if(c != 0)
      {
        x = -b / c;
        cout << x << endl;
      }
    }
    else
      if(c != 0)
      {
        cout << "no result";
      }
      else
        cout << "x is any";

  return 0;
}
