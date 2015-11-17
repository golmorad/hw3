//Mehrdad Golkia
//Random Number Generator

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

double rn_gn(double* Z) {
    
    for (int i=0; i<100; i++) {
        Z[i] = rand() /1 + 0;        
    }
}

int main() {
    
    double A[100];
    rn_gn(A);
    ofstream out("rand.dat");
    for (int i=0; i<100; i++) {
        out << "A[" << i << "] =" << A[i] << endl;
    }
    out.close();
    return 0;
}