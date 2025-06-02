#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    char count='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
        }
        count++;
        cout<<endl;
    }


}