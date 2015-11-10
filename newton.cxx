#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main(){
  complex <double> z0, z1;
  int N=400;
  complex<double> ii = complex<double>(0.0, 1.0); //=i
  for (double re =-2; re <=2; re+=0.1) {
    for (double im = -2; im <=2; im+=0.1) {
      for (int i=0; i<N;i++){
     // if (i==0) {
	z0= (re + im) * ii;
      }
      z1 = z0 - (pow(z0,3)-(1.0))/(3.0*pow(z0,2));
      z0=z1;
      cout<< real(z1)<< "\t"<<imag(z1)<<"\t"<< i<< endl;
     // }
    
  }
  }
  return 0;
}
