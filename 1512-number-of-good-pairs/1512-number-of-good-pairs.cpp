class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int l=0;l<nums.size();l++) {
            for(int r=0;r<nums.size()-1;r++) {
                if(l>r&&nums[l]==nums[r])
                    count++;
            }
        }
        return count;
    }
};