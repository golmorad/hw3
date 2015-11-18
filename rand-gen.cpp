//Mehrdad Golkia
//Random Number Generator

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

double rn_gn(double* Z) {
    
    for (int i =0; i<101; i++) {
        
        Z[i] = ((double)rand() / (RAND_MAX));
    }
}

int main() {
    srand(time(0));
    double A[101];
    rn_gn(A);
    ofstream out("rand.dat");
    for (int i=0; i<101; i++) {
        out << "A[" << i << "] =" << A[i] << endl;
    }
    out.close();
    return 0;
}