// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>  
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int, int> mpp;
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cout<<"enter q1"<<endl;
    cin >> q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    return 0;
}