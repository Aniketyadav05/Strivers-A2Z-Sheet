// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
class solution{
    public:
        string largestOddNumber(string s){
            for(int i = s.size()-1;i>=0;i--){
                if((s[i]-'0')%2==1){
                    return s.substr(0,i+1);    
                }
            }
            return "";
        }
};
int main() {
    // Write C++ code here
    solution solve;
    string input;
    cout<<"enter a sting"<<endl;
    getline(cin, input); 
    string output = solve.largestOddNumber(input);
    
    cout <<  output << endl;

    return 0;
}