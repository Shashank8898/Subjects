#include <iostream>
#include <cmath>
using namespace std;

float f(float x) {
    return (x*x*x - 4*x - 9);   // Change function here
}

int main() {
    float a, b, mid, error;

    cout << "Enter initial values a and b: ";
    cin >> a >> b;

    if (f(a) * f(b) > 0) {
        cout << "Root does not exist between a and b";
        return 0;
    }

    error = 0.0001;   // tolerance
    while (fabs(b - a) > error) {
        mid = (a + b) / 2;

        if (f(a) * f(mid) < 0)
            b = mid;
        else
            a = mid;
    }

    cout << "Root = " << mid;
    return 0;
}
