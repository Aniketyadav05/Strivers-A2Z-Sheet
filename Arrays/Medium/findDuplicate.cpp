class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> counts;
        for(auto x: nums){
            counts[x]++;
        }
        for(auto pair: counts){
            if(pair.second>1){
                return pair.first;
            }
        }
        return 0;


    }
};