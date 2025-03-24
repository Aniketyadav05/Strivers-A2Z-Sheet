#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for (auto x : s) {
            count[x]++;
        }
        for (auto x : t) {
            count[x]--;
        }
        for (auto x : count) {
            if (x.second != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (sol.isAnagram(s, t)) {
        cout << "They are anagrams!" << endl;
    } else {
        cout << "They are not anagrams." << endl;
    }

    return 0;
}
