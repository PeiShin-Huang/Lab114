#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c1, c2, smallest;
    a = -pow(2,128);
    b = -pow(2,127);
    smallest = b;

    //cout << "pow(2,128) = " << fixed << setprecision(50) << a << endl;
    cout << "pow(2,127) = " << setprecision(50) << b << endl;
    cout << "pow(2,127) = " << fixed << setprecision(50) << b << endl;

    for(int i=126; i>=100; i--){
        smallest = smallest - pow(2,i);
        cout << "+pow(2," << i << ") = " << fixed <<  setprecision(50) << smallest << endl; 
    }
    return 0;
}
