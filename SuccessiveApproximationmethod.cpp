#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double f(double x)
{
  
  return (double)x*x-x-1;
}

double g(double x)
{
  
  return (double)x*x-x-1;
}

int main()
{
  double x0,xn=1;
  int iter=0;

  cout<<"Enter the initial approximation: ";
  cin>>x0;
  
  cout<<"\nIteration     x0        xn\n";
  
  while(f(x0)*f(xn)>0)
  {
    xn=x0;
    x0++;
  }
  
  /* 0.000001 is the accepted error */
  while(fabs(xn-x0)>0.000001)
  {
    x0=xn;
    xn=g(x0);
    iter++;
    
    cout<<"     "<<iter<<"     "<<x0<<"     "<<setprecision(6)<<xn<<"\n";
  }
  cout<<"\n\nThe root of the equation x*x-x-1 is "<<xn;
  
  return 0;
}
