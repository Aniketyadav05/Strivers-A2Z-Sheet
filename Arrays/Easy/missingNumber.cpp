// First solution 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans =n;
        
        for(int i=0;i<n;i++){
            if(nums[i] != i){
                ans =i;
                break;
            }
        }
        return ans;
    }
};

//Second solution 
class Solution {
public:
    
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        int ArrSum = 0;
        for(int i =1;i<=n;i++){
            sum+=i;
        }
        for(int i =0; i<n;i++){
            ArrSum = ArrSum + nums[i];
        }

        int result = sum - ArrSum;
        return result;
    }
   
};