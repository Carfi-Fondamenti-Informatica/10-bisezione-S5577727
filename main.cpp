#include <iostream>
#include <cmath>
using namespace std;

float f(float var){
    return (var*var*cos(var)+1);
}

int main() {
    float a=0,b=0,x,err;

    while ((f(a) * f(b))>=0){
        cout << "inserire estremi";
        cin >> a >> b;
    }

    do {
        x=(a+b)/2;

        if ((f(x))==0){
            cout << x << endl;
            cout << f(x) << endl;
            return 0;
        }
        if ((f(x) * f(a))<0){
                b=x;
        }
        else a=x;

        err = abs((b-a)/2);

    }while(err >= 1e-6);

    cout << int(x*10000)/10000.0;
    return 0;
}
