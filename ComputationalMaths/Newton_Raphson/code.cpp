#include<iostream>
#include<cmath>
using namespace std;

float f(float x) {
    return (x*x*x - 4*x - 9);   //Function returning value
}

float df(float x) {
    return (3*x*x - 4);         // Derivative of f(x)
}

int main(){

    float x0,x1,error;
    error = 0.00001;

    cout << "Enter value of x0 :";
    cin >> x0;
    cout << endl;

    do{
        x1 = x0-(f(x0)/df(x0));
        x0 = x1;
    }while(fabs(f(x1))>error);

    cout<< "the root is :" << x1<<endl;
    return 0;
}