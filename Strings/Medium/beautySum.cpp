class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            map<char, int> feq;
            for(int j=i;j<n;j++){
                int least=INT_MAX;
                int most= 0;
                int ch = s[j]-'a';
                feq[ch]++;
                for(auto f:feq){
                    if(f.second>0){
                        most = max(most,f.second);   
                        least = min(least,f.second);   
                    }
                }
                ans+=(most-least);
            }
        }
        return ans;
    }
};