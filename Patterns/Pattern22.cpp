#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=0;i<(n*2)-1;i++){
        for(int j=0;j<(n*2)-1;j++){
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - j;
            int left = (2*n - 2) - i;
            cout<<(n- min(min(top,bottom), min(left,right)))<<" "; 
        }
        cout<<endl;
    }
    

}