#include<iostream>
using namespace std;
int main(){
    // int i,n,j;
    // cin >> n;
    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         cout << j+1;
    //     } cout << endl;
    // }



    int i;
    char j,n;
    cin >> n;
    for(i=int('a');i<int(n);i++){
        for(j='a';j<=n;j++){
            cout << char(j) << " ";
        }
        cout << endl;
    }

}