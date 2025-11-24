#include <iostream>
#include <cmath>
using namespace std;

float f(float x) {
    return (x*x*x - 4*x - 9);   // change function
}

int main() {
    float a, b, x, error = 0.0001;

    cout << "Enter a and b: ";
    cin >> a >> b;

    if (f(a) * f(b) > 0) {
        cout << "Root is not bracketed";
        return 0;
    }

    do {
        x = (a*f(b) - b*f(a)) / (f(b) - f(a));

        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;

    } while (fabs(f(x)) > error);

    cout << "Root = " << x;
    return 0;
}
