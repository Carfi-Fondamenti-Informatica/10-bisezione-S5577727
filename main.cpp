#include <iostream>
#include <cmath>
using namespace std;
float c=1;

float funzione (float variabile){
    c = (variabile*variabile*cos(variabile) + 1);
    return c;
}

int main() {
    float a,b;
    float err;
    float x;

    while (c>=0){
       cout << "inserire estremi" << endl;
       cin >> a >> b;
       c = funzione(a) * funzione(b);
   }

    while (err >= 1e-6){
        a=(a+b)/2;
        x=a;
        if((funzione(x))==0){
            return x;
        }
        else {
            if((funzione(a) * funzione(b))<0){
                b=x;
            }
            else {
                a=x;
            }
        }
        err = abs(((b-a)/2));
    }
    cout << x;

   return 0;
}
