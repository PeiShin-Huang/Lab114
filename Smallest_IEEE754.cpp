#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c1, c2, smallest;
    a = -pow(2,128);
    b = -pow(2,127);
    smallest = b;

    cout << "pow(2,127) = " << setprecision(50) << b << endl;
    cout << "pow(2,127) = " << fixed << setprecision(50) << b << endl;

    //找最小的數字
    //從-pow(2,127)一直往右加一個bit，就是把matisa的數字從左邊一個一個加上去(0改成1)。直到無法加，就會顯示-inf
    for(int i=126; i>=100; i--){
        smallest = smallest - pow(2,i);
        cout << " +pow(2," << i << ") = " << fixed <<  setprecision(50) << smallest << endl; 
    }
    return 0;
}
