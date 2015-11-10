#include <iostream>
#include <complex>
#include <cmath>
using namespace std;



complex<double> f (complex<double> x) {
    complex<double> ii = complex<double>(0.0, 1.0); //=i
    complex<double> z=(tan(1.0+ii)*x);
    return z;
    
}
int main(){

  // Example how to declare a single complex variable:
  complex<double> c;

  // d = 1 + 2i 
 
 int N = 100;
 double deltaphi = (M_PI)/(N-1);
 complex<double> a[N];
 
for (int i=(-N/2); i< ((N-1)/2); i++) 
{
  //a[i]=exp((i*deltaphi*ii));
  a[i] = f(i*deltaphi);
  cout <<i*deltaphi<< " \t "<<real(a[i])<<" \t "<<imag(a[i])<<" \t"<< abs(a[i])<<endl;
  
  
}
  return 0;
}
