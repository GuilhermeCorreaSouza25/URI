#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
int main()
{
  double A,B,C;
  double delta,bhaskara_pos,bhaskara_neg,R_delta;

  cin >> A;
  cin >> B;
  cin >> C;

  delta = pow(B,2) - 4*(A*C);

  if(delta >=0 && A != 0)
  {
    R_delta = sqrt(delta);
    bhaskara_pos = ((B*-1) + R_delta)/(2*A);
    bhaskara_neg = ((B*-1) - R_delta)/(2*A);
    printf("R1 = %.5lf\n",bhaskara_pos);
    printf("R2 = %.5lf\n",bhaskara_neg);
  }
  else
  {
    cout << "Impossivel calcular" << endl;
  }

  return 0;
}//fim main
