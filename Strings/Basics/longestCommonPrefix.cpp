// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
class solution{
    public:
        string longestCommonPrefix(vector<string>& strs){
            if(strs.empty()){return "";}
            string prefix = strs[0];
            int prefixLen = prefix.length();
            for(int i =1;i<strs.size();i++){
                string s = strs[i];
                if(prefixLen>s.length() || prefix !=s.substr(0,prefixLen)){
                    prefixLen--;
                    if(prefixLen == 0){
                        return "";
                    }
                    prefix = prefix.substr(0,prefixLen);
                }
            }
            return prefix;
        }
};
int main() {
    // Write C++ code here
    solution sol;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = sol.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}