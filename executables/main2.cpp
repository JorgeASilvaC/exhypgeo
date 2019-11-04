#include <iostream>
#include <complex>
#include <iomanip>
#include <cmath>

#include "nr.h"

using std::complex;
using std::cout;
using std::endl;

int main(void)
{
        double x,y;
        complex<double> a(-25,0.0),b(1.0,0.0),c(1.5,0.0);
        complex<double> z,q;

        cout << fixed << setprecision(6);
        cout << "Input X Y of Complex Argument: " << endl;
        cin >> x >> y;
        cout << endl;
          
	z=complex<double> (x,y);
        q=NR::hypgeo(a,b,c,z);
        
	cout << "2F1(0.5,1.0,1.5;z) = ";
        cout << setw(11) << q << endl;
        return 0;
}
