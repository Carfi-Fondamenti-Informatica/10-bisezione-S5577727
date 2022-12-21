#include <iostream>
#include <cmath>
using namespace std;

float f(float var){
    return (var*var*cos(var) + 1);
}

int main() {
    float a,b,x, err;
    cout << "inserire estremi" << endl;
    cin >> a >> b;
    while ((f(a) * f(b))>=0){
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    }
    do {
        a=(a+b)/2;
        x=a;
        float s = f(x);
        if (s==0){
            cout << x;
            break;
        }
        else {
            if ((f(a) * f(b))<0){
                b=x;
            }
            else {
                a=x;
            }
            err = abs((b-a)/2);
        }
    }while(err >= 1e-6);
    cout << x;
    return 0;
}
