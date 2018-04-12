#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


float fun(float y)
{
  return -y;
}
  


int main()
{
  int i = 0;

  double h = 0.1;

  int N = 10.0/h;

  double y = 1.0;

  double x = 0.0;

  double z = 0.0;
  

  for (i = 0; i < N; i++)
    {
      
      
      double k1 = fun(y);

      double k2 = fun(y + h*k1/2.0);

      double k3 = fun(y + h*k2/2.0);

      double k4 = fun(y + h*k3);

      z = z + h*(k1 + 2.0*k2 + 2.0*k3 + k4)/6.0;

      x = x + h;

      double p1 = z;

      double p2 = z + h*p1/2.0;

      double p3 = z + h*p2/2.0;

      double p4 = z + h*p3/2.0;
      
      y = y + h*(p1 + 2.0*p2 + 2.0*p3 + p4)/6.0;

      

      cout << x << " " << y << " " << z << endl;
    }

  return 0;

}
