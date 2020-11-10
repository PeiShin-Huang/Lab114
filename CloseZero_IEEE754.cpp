#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b;
    //Find the positive number closest 0
    cout << "Positive" << endl;
    for ( int i = -148; i >= -150; i--){
        a = pow(2,i);
        cout << "pow(2," << i << ") = " << fixed << setprecision(160) << a << endl;
    }

    //Find the negitive number closest 0
    cout << endl << "Negative" << endl;
    for ( int i = -148; i >= -150; i--){
        b = -pow(2,i);
        cout << "pow(2," << i << ") = " << fixed << setprecision(160) << b << endl;
    }
    
    return 0;
}
