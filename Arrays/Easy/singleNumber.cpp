class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int i =0;
        int ans =0;
        while(i<n){
            ans = ans^nums[i];
            i++;
        }
        return ans;
    }
};