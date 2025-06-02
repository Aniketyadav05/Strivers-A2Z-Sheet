#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    char count='E';
    for(int i=1;i<=n;i++){
        
        for(int j=0;j<i;j++){
            
            cout<<count<<" ";
            count++;
        }
        
        count-=(i+1);
        
        cout<<endl;
    }


}