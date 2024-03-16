class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        for(int i = 0;i<n;i++){
            sum1 = sum1 + nums[i];
        }
        int sum2 = (n*(n+1))/2;
        int ans = sum2 - sum1;
        return ans;
        
    }
};