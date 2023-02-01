#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    float area, π, r;
    π=3.14, r=5;
    
   cout << "Radius of the circle: "<< r << endl;
   
   area=π*pow(r,2);
   
   cout << π << "*" << r << "²" << "=" << area;
   
   return 0;
   }   