#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int i=0;
    while(i<5){
        int j=1;
        while(j<=5){
            cout<<(5*i)+j<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}