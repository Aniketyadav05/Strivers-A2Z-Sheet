#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    int i=0;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}