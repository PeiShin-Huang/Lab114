#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c1, c2, biggest;
    a = pow(2,128);
    b = pow(2,127);
    biggest = b;

    cout << "pow(2,128) = " << fixed << setprecision(5) << a << endl;
    cout << "pow(2,127) = " << fixed << setprecision(5) << b << endl;

    //找最大的數字
    //從pow(2,127)一直往右加一個bit，就是把matisa的數字從左邊一個一個加上去(0改成1)。直到無法加，就會顯示inf
    for(int i=126; i>=100; i--){
        biggest = biggest + pow(2,i);
        cout << " +pow(2," << i << ") = " << fixed << setprecision(5) << biggest << endl; 
    }
    return 0;
}
