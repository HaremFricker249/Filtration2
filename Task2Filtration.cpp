
#include <iostream>
#include <math.h>

using namespace std;
double r = 0.1; 
double rc = 0.1;
double Rk = 10;
double pk = 1;
double pc = 5;
double k = 81;
double u = 0.0009;
double step = 0.08;

int main()
{
    while (r >= rc && r < Rk)
    {
        double p_of_r = pk+((pc-pk)/log(rc/Rk))*log(r/Rk);
        cout << p_of_r << endl;
        r = r + step;
    }
    double U = (1 / r) * (k / u) * ((pk - pc) / (log(rc / Rk)));
    double p_ = pk - ((pk - pc) / (2 * log(Rk / rc)));
    cout << endl << "U=" << " " << U << endl << "p_=" << " " << p_;
}
