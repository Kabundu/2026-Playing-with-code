#include <stdio.h>
#include <math.h>
void multadd(double, double,double);
void yikes(double);
int main()
{
 multadd(1.0, 2.0, 3.0);
 const double PI = 3.14159;
  double PI_4 = PI / 4;
  double sinPI4 = sin(PI_4);
  double cosPI4 = cos(PI_4);
  multadd(1.0/2.0, cosPI4, sinPI4);
  yikes(2);
  return 0;
}

void multadd(double a, double b, double c)
{
    double r=  a * b + c;
  printf("%f\n" , r);

}

  void yikes(double x)
{
    double exp_result = exp(-x);
    double sqrt_result = sqrt(1 - exp_result);

    multadd(x, exp_result, sqrt_result);
}



