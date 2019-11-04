This program evaluates the Gauss hypergeometric function
2F1(a,b,c,z) for complex a, b, c, and z, by direct 
integration of the hypergeometric equation in the complex plane.

The branch cut is taken to lie along the real axis, Re(z)>1.

To compile:
mkdir build
cd build
cmake ../
make hyper2
