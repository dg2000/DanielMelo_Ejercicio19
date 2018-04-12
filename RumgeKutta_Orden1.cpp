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

  float h = 0.1;

  int N = 3.0/h;

  float y = 1.0;

  float x = 0.0;

  //float z = 0;
  

  for (i = 0; i < N; i++)
    {
      //z = z + h*fun(y);
      
      x = x + h;

      float k1 = fun(y);

      float k2 = fun(y + h*k1/2.0);

      float k3 = fun(y + h*k2/2.0);

      float k4 = fun(y + h*k3);

      y = y + h*(k1 + 2.0*k2 + 2.0*k3 + k4)/6.0;

      cout << x << " " << y << endl;
    }

  return 0;

}
