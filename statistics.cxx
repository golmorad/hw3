//Mehrdad
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------
double rn_gn(double* Z, const int N) {
    
    for (int i =0; i<N; i++) {
        
        Z[i] = ((double)rand() / (RAND_MAX));
    }
}

void m_v (double* Z ,const int N , double& m , double& v ){
    m = 0.0;
    v = 0.0;

    for( int i = 0 ; i < N-1 ; i++){
        m += 1.0/N * (Z[i]);
        cout << Z[i] << endl;
        }
    for( int i = 0 ; i < N-1 ; i++){
        v += 1.0/N * pow((Z[i] - m),2);
        }
}

int main(){
   const int N = 100;
   double p[N];
   double mean, var;

   // Some lines here....
   srand(time(0));
   rn_gn (p,N);
   m_v(p,N,mean,var);
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;
   return 0;
}
