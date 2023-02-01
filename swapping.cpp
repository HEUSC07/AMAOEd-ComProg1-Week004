#include<iostream>
using namespace std;

int main() {
    int x, y;
    x=5, y =7;
    
    cout << "before swapping: " << x << "," << y << endl;
    x=x+y;
    y=x-y;
    x=x-y;
    
    cout << "after swapping: "<< x <<","<< y << endl;
    
    return 0; 
}