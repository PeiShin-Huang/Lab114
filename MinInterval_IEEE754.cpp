#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b, interval, tmp, tmp2;
    int i = 0;

    //Find minimum interval
    a = pow(2,-149);
    b = pow(2,-150);
    cout << "pow(2,-149) = " << fixed << setprecision(160) << a << endl;
    cout << "pow(2,-150) = " << fixed << setprecision(160) << b << endl;
    cout << "最小間隔是pow(2,-149)" << endl;
    
    //Count how many, 算鄰居都是最小間隔的有幾個 
    interval = a;
    tmp = pow(2,-125) - interval;
    tmp2 = tmp - interval;
    while(tmp != tmp2){
        tmp = tmp2;
        tmp2 = tmp - interval;
        i++;
    }
    cout << "Total number = " << i << endl;

    return 0;
}
