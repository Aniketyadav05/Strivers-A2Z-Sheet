// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class solution{
    public:
        string removeOuterParanthesis(string s){
            string result;
            int balance = 0;
            for(int i=0;i<s.size();i++){
                if(s[i] == '('){
                    if(balance>0){
                        result+= s[i];
                    }
                    balance++;
                }else{
                    balance--;
                    if(balance>0){
                        result+= s[i];
                    }
                }
            }
            return result;
        }
};
int main() {
    // Write C++ code here
    solution solve;
    string input;
    cout<<"enter a sting"<<endl;
    cin>>input;
    string output = solve.removeOuterParanthesis(input);
    cout<<output<<endl;

    return 0;
}