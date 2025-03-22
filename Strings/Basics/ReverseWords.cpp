
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
class solution{
    public:
        string ReverseWords(string s){
            stringstream ss(s);
            string word;
            vector<string> words;
            while(ss>>word){
                words.push_back(word);
            }
            
            string res;
            for(int i=words.size()-1;i>=0;i--){
                res+=words[i];
                if(i!=0){
                    res+=" ";
                }
            }
            return res;
        }
};
int main() {
    // Write C++ code here
    solution solve;
    string input;
    cout<<"enter a sting"<<endl;
    getline(cin, input); 
    string output = solve.ReverseWords(input);
    
    cout << "Reversed words: " << output << endl;

    return 0;
}