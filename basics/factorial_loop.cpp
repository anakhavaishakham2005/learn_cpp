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



    // int i;
    // char j,n;
    // cin >> n;
    // for(i=int('a');i<int(n);i++){
    //     for(j='a';j<=n;j++){
    //         cout << char(j) << " ";
    //     }
    //     cout << endl;
    // }

    // int i,j,n;
    // cin >> n;               //0
    // for(i=0;i<n;i++){       //1 0
    //   for(j=0;j<i;j++){     //0 1 0
    //       cout << "0 ";     //1 0 1 0
    //     if((i+j)%2==0)
    //       cout << "1 ";
    //     else 
    //       cout << "0 ";
    // }cout << endl;
    // }

int i,j,n;
    cin >> n;      
    int mid=n/2+1;              //  *  
    for(i=0;i<n;i++){           //  *  
      for(j=0;j<n;j++){         //***** 
          if(i==mid | j==mid)   //  *  
              cout << "*";      //  *   
          else cout << " ";     
    }cout << endl;
    }





    return 0;

}