#include<iostream>
using namespace std;
int main(){
    // int a,count=0;
    // cout << "Enter a number: ";
    // cin>>a;
    // for(int i=1;a/2>i;i++){
    //     if(a%i==0){
    //         count++;
    //     }}
    //     if(count==1 && a==a){
    //         cout<<a<<" is a prime number."<<endl;
    //     }
    //     else{
    //         cout<<a<<" is not a prime number."<<endl;
    //     }

    int a,b,c;
    cout<< "Enter age of Ram, Shyam and Mohan:" ;
    cin>>a>>b>>c;
    if(a<b and a<c){
        cout<< "Ram is youngest";
    }
    else if(b<a and b<c){
        cout<< "Shyam is youngest";
    }
    else if(c<a and c<b){
        cout<< "Mohan is youngest";
    }
    else{
        cout<< "All are of same age";
    }

    
    
}