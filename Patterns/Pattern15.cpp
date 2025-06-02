#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    
    for(int i=n;i>=0;i--){
        char count='A';
        for(int j=0;j<i;j++){
            
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }


}