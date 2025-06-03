#include <algorithm>
class Solution {
public:
    vector<int> reverse (vector<int>& nums, int start , int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
        return nums;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<1){
            return;
        }
        k= k % n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
};