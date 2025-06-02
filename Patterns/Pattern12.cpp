#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    int p=n+1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int k=p;k>0;k--){
            cout<<" ";
            
        }
        p-=2;
        for(int m=i;m>=0;m--){
            cout<<m+1;
        }
        cout<<endl;
    }
}