#include <iostream>
#include <cmath>
#include<stdio.h>
using namespace std;

int main()
{
    float A, B, P, r, t, n;
    
    cout << "Enter initial principal balance: ";
    cin >> P;
    
    cout << "Enter annual interest rate: ";
    cin >> r;
    
    cout << "Enter time period: ";
    cin >> t;
    
    cout << "Enter time interest: ";
    cin >> n;
    
    B= P*pow((1+r/100/n),n*t);
    A= (P*r*t)/100;
    
    cout << "A=" << A << endl;
    cout << "B=" << B;

        return 0;
}