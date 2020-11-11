#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float a = 16777216, b =1;
    
    cout << "a + b = " << setprecision(10) << (float) a + b << endl;
    cout << "a - b = " << setprecision(10) << (float) a - b << endl;

    return 0;
}
