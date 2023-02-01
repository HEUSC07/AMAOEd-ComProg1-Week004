#include<iostream>
using namespace std;

int main() {
    int x, y, temp;
    x=5, y =7;
     cout << "before swapping: " << x << "," << y << endl;
     
     temp=5;
     x=y;
     y=temp;
     
     cout << "after swapping: "<< x <<","<< y << endl;
    
    return 0; 
}