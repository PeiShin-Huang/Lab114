#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float a, c0, c1, c2; 
    a = pow(2,0);
    c0 = pow(2,-23);
    c1 = pow(2,-24);
    c2 = pow(2,-25);
    cout << "1+pow(2,-23) = " << fixed << setprecision(50) << a+c0 << endl;
    cout << "1+pow(2,-24) = " << fixed << setprecision(50) << a+c1 << endl;
    cout << "1+pow(2,-25) = " << fixed << setprecision(50) << a+c2 << endl << endl;
    cout << "1-pow(2,-23) = " << fixed << setprecision(50) << a-c0 << endl;
    cout << "1-pow(2,-24) = " << fixed << setprecision(50) << a-c1 << endl;
    cout << "1-pow(2,-25) = " << fixed << setprecision(50) << a-c2 << endl;

    cout << "由輸出結果可以得知：1-pow(2,-24)是最接近1的浮點數" << endl;

    return 0;
}
