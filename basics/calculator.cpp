#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    char yes = 'y';
    while(yes=='y') {
    cout<< "Enter first and second number for arithmetic operations:" << endl;
    cin >>a >>b;
    cout<< "Enter the operator as (+,-,*,/): "<<endl;
    cin >> op;
    switch(op){
        case '+':
            cout<< "Sum is:" << a+b << endl;
            break;
        case '-':
            cout<< "Difference is: " << a-b << endl;
            break;
        case '*':
            cout<< "Product is: " << a*b << endl;
            break;
        case '/':
            if(b != 0) {
                cout<< "Quotient is: " << a/b << endl;
            } else {
                cout<< "Division by zero is not allowed." << endl;
            }
            break;}
        cout<< "Do you want to continue?(y/n): ";
        cin>> yes;
    
}
return 0;
}