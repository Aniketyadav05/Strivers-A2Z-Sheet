#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i=n;
    while(i>0){
        int j=0;
        while(j<=i){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i-=1;
    }
}