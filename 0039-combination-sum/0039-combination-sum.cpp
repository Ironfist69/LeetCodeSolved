class Solution {
public:
    vector<vector<int>>ans; //2d vector to store ans
    void solve(int i,vector<int>& arr,vector<int>&temp,int target) {
        if(target==0) {
            ans.push_back(temp);
            return;
        }
        if(target<0) {
            return;
        }
        if(i==arr.size()){
            return;
        }
        solve(i+1,arr,temp,target);
        temp.push_back(arr[i]);
        solve(i,arr,temp,target-arr[i]);
        temp.pop_back(); //backtrack
    }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        vector<int> temp;
        solve(0,candidates,temp,target);
        return ans;
    }
};