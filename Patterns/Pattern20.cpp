#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=n;i>0;i--){
        for(int j=0;j<(n-i+1);j++){
            cout<<"*";
        }
        for(int p=0;p<i*2;p++ ){
            cout<<" ";
        }
        for(int k=0;k<(n-i+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<(n-i+1);j++){
            cout<<"*";
        }
        for(int p=0;p<i*2;p++ ){
            cout<<" ";
        }
        for(int k=0;k<(n-i+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    

}