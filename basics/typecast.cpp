#include<iostream>
using namespace std;
int main(){
    char a= 'e';
    cout<< a << endl;
    cout<<(int)a << endl; // Typecast char to int
    cout<<5/2<<endl;
    cout<<5.0/2<<endl; // Implicit typecasting from int to float
    cout<<5/2.0<<endl; // Implicit typecasting from int to float
    cout<<5.0/2.0<<endl; // Implicit typecasting from int to float
    cout<<5.0/2.0f<<endl; // Implicit typecasting from int to float
    cout<<7/22*(3.14+2)*3/5<<endl;
    //here 7/22 is integer division, so it will be 0.
    float d= 2/5;
    cout << d << endl; // This will print 0.0 because 2/5 is integer division
    float e= 2.0/5; // Explicit typecasting to float;
    cout << e << endl; // This will print 0.4 because 2.0/5 is float division
}