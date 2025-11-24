#include<iostream>
#include<cmath>
using namespace std;

float f(float x) {
    return (x*x*x - 4*x - 9);   //Function returning value
}

int main(){
    float x0, x1, x2, mid, error;

    cout << "Enter initial values a and b: ";
    cin >> x0 >> x1;

    error = 0.00001;

    do{
        x2 = x1-(f(x1)*(x1-x0))/(f(x1)-f(x0));
        x0 = x1;
        x1 = x2;
    }while(fabs(x1-x0)>error);

    cout << "The root is: " << x2;
    return 0;
}