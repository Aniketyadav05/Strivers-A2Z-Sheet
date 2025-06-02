#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    
    for(int i=0;i<=n;i++){
        char count='A';
        for(int j=0;j<i;j++){
            
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }


}