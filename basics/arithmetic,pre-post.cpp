#include<iostream>
using namespace std;
int main(){
    // int x=9,y=2;
    // cout<<"Addition: " << (x + y) << endl;
    // cout<<"Subtraction: " << (x - y) << endl;
    // cout<<"Multiplication: " << (x * y) << endl;
    // cout<<"Division: " << (float(x) / y) << endl;
    // cout<<"Modulus: " << (x % y) << endl;

    // int x=10;
    // cout << "Increment: " << (++x) << endl; // Pre-increment
    // cout<<x << endl; // Check value after pre-increment
    // cout << "Decrement: " << (--x) << endl; // Pre-decrement
    // cout<<x << endl; // Check value after pre-decrement
    // cout << "Post-increment: " << (x++) << endl; // Post-increment
    // cout<<x << endl; // Check value after post-increment
    // cout << "Post-decrement: " << (x--) << endl; // Post-decrement
    // cout<<x << endl; // Check value after post-decrement

    float r,h;
    cout << "Enter radius and height of cylinder: ";
    cin>> r >> h;
    cout << "Volume of Cylinder:" << (22/7)*r*r*h << endl;
    cout << "Surface area: " << 2*3.14*r *(h+r)<< endl;



}