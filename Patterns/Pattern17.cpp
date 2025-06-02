#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    
    for(int i=0;i<n;i++){
        
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        char count='A';
        int breakpoint = (2*i+1)/2;
        for(int j=0;j<2*i+1;j++){
            
            cout<<count;
            if(j<=breakpoint){
                count++;
            }
            else{
                count--;
            }
            
        }
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        
        
        
        cout<<endl;
    }


}