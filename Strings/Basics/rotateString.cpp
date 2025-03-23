#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        int size = s.length();
        string temp = s;

        for (int i = 0; i < size; i++) {
            temp = temp.substr(1) + temp[0]; 
            if (temp == goal) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    Solution obj;
    string s, goal;

    cout << "Enter the original string: ";
    cin >> s;

    cout << "Enter the goal string: ";
    cin >> goal;

    if (obj.rotateString(s, goal)) {
        cout << "Yes, it can be rotated to match the goal string." << endl;
    } else {
        cout << "No, it cannot be rotated to match the goal string." << endl;
    }

    return 0;
}
