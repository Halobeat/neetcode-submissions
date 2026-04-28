class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        int n = nums.size();
        for (int j= 0; j < n;j++) {
            ans.push_back(0);
        }
        
        for (int i = 0; i < n; i++) {
            ans[n+i] = nums[i]; 
        }
        return ans;
    }
};