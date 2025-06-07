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

}