
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t){
        vector<int> IndexS(200,0);
        vector<int> IndexT(200,0);
        int len = s.length();
        if(len != t.length()){
            return false;
        }
        
        for(int i =0;i<len;i++){
            if(IndexS[s[i]] != IndexT[t[i]]){
                return false;
            }
            IndexS[s[i]] = i+1;
            IndexT[t[i]] = i+1;
        }
        return true;
    }
};
int main() {
    Solution obj;
    string s, t;
    
    cout << "Enter string s: ";
    cin >> s;
    
    cout << "Enter string t: ";
    cin >> t;
    
    if (obj.isIsomorphic(s, t)) {
        cout << "The strings are isomorphic." << endl;
    } else {
        cout << "The strings are not isomorphic." << endl;
    }

    return 0;
}