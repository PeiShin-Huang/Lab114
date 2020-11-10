#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float a, c1, c2, c0;
    float interval, tmp, tmp2;
    int i = 0;
    a = pow(2,127);
    c0 = pow(2,102);
    c1 = pow(2,103);
    c2 = pow(2,104);
    cout << "pow(2,127) + pow(2,102) = " << fixed << setprecision(30) << (float)a+c0 << endl;
    cout << "pow(2,127) - pow(2,102) = " << fixed << setprecision(30) << (float)a-c0 << endl;
    cout << "pow(2,127) + pow(2,103) = " << fixed << setprecision(30) << (float)a+c1 << endl;
    cout << "pow(2,127) - pow(2,103) = " << fixed << setprecision(30) << (float)a-c1 << endl;
    cout << "pow(2,127) + pow(2,104) = " << fixed << setprecision(30) << (float)a+c2 << endl;
    cout << "pow(2,127) - pow(2,104) = " << fixed << setprecision(30) << (float)a-c2 << endl;
    cout << "由結果可以看出，pow(2,127)可以減2^103，但無法加，所以最大間格是2^104" << endl;

    interval = c2;
    tmp = a + interval;    //Start from pow(2,127) + pow(2,104)
    tmp2 = tmp + interval;

    //Counting the number until it can't add 2^104.
    while( (tmp-interval) != tmp2 ){    
        i++;
        tmp = tmp2;
        tmp2 = tmp + interval;
    }
    cout << endl;
    cout << "Total = " << i*2 << endl;   //乘以2是因為正負數的最小間隔都是2^104

    return 0;
}
