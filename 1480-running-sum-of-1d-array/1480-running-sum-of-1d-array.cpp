class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int current=0;
        for(int i=0;i<nums.size();i++) {
            current+=nums[i];
            ans.push_back(current);
        }
        return ans;
    }
};