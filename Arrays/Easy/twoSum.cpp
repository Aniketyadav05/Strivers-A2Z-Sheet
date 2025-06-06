class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> ArrMap;
        int n =nums.size();
        for(int i =0;i<n;i++){
            ArrMap[nums[i]] = i;
        }
        for(int j =0;j<n;j++){
            int complement = target -nums[j];
            if(ArrMap.count(complement) && ArrMap[complement] !=j){
                return {j,ArrMap[complement]};
            }
        }
        return {};
    }
};