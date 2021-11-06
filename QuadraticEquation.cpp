#include <bits/stdc++.h>
using namespace std;

int main(){
    // console
    cout << "Enter parameters:" << endl;
    cout << "e.g ax^2 + bx + c" << endl;

    // taking parameters input
    int a; int b; int c;
    
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    // checking if real root exists or not
    int d = b*b;
    int e = 4*a*c;
    if(d<e){
        cout << "Real roots do not exist" << endl;
        return 0;
    }

    // calculating root values
    float f = powf(d-e,0.5);
    float roota = (-b + f)/(2*a);
    float rootb = (-b - f)/(2*a);

    // printing values
    cout << "x = " << roota << " or " << rootb << endl;
    
    return 0;
}