
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <iostream>
using namespace std;

double f(double x)
{
  float a;
  //f(x) = x**3-2x**2+1;
  a = pow(x,3) - 2.0*pow(x,2) + 1.0;
  return(a);
}



int main(void){


  int j, N;

	printf("ingrese el valor de N\n");
	  scanf("%d",&N);

  double x0,xf, h ,x[N], fp[N];


  printf("ingrese el valor de x inicial\n");
  scanf("%lf",&x0); 

  printf("ingrese el valor de x final\n");
  scanf("%lf",&xf); 
  
	h = (xf-x0)/double(N);

  printf ("x0 = %lf,xf = %lf, h = %lf\n", x0,xf,h);

	for(j=0; j<N; j++){
	    x[j] = x0 + j*h;
            fp[j] = f(x[j]);
	printf("x(%d)=%lf, fp(%d)=%f\n",j,x[j],j, fp[j]);

	}


}
