class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> count;
        for(char x:s){
            count[x]++;
        }
        vector<vector<char>> bucket(n+1);
        for (auto [c, f] : count)
            {
                bucket[f].push_back(c);

            }
                string ans;
        for (int freq = n; freq >= 1; --freq){
            for (char c : bucket[freq]) 
                {
                    ans.append(freq, c);
                }
        }
            
        return ans;
    }
};

 