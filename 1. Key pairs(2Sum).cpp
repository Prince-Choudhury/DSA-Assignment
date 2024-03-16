/*
//MAP
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> seen;
        int n = nums.size();
        for(int i=0; i< n; i++){
            int complement = target - nums[i];
            if(seen.contains(complement)){
                return std::vector<int>({seen[complement], i});
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> arr;
        for(int i = 0; i<n; i++){
            arr.push_back(nums[i]);
        }

        sort(arr.begin(), arr.end());
        vector<int>ans;
        int i = 0;
        int j = n-1;

        int index1, index2;

        while(i<j){
            int currSum = arr[i] + arr[j];
            if(currSum == target){
                index1 = i;
                index2 = j;
                break;
            }
            else if(currSum > target){
                j--;
            }
            else{
                i++;
            }
        }
        
        for(int i = 0; i<n; i++){
            if(nums[i] == arr[index1]){
                ans.push_back(i);
            }
            else if(nums[i] == arr[index2]){
                ans.push_back(i);
            }
        }

        return ans;
    }
};