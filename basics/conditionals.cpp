#include<iostream>
using namespace std;
int main(){
    int a,count=0;
    cout << "Enter a number: ";
    cin>>a;
    for(int i=1;a/2>i;i++){
        if(a%i==0){
            count++;
        }}
        if(count==1 && a==a){
            cout<<a<<" is a prime number."<<endl;
        }
        else{
            cout<<a<<" is not a prime number."<<endl;
        }
    
}