class Solution {
public:
    vector<int> generator(int num){
        long long ans =1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int i=1;i<num;i++){
            ans = ans*(num-i);
            ans= ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=1;i<=numRows;i++){
            
            ans.push_back(generator(i));
        }
        return ans;
    }
};