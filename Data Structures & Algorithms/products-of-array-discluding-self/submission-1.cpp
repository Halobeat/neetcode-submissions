class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n,0);
    int all_prod = 1;
    int count_zero = 0;
    for (const auto& x: nums) {
        if (x==0) {
            count_zero++;
        } else {
            all_prod *= x;
        }
        if (count_zero > 1) {
            return res;
        }
    }
    for (int i = 0; i < n; i++) {
        if (count_zero > 0 && nums[i] != 0) {
            res[i] = 0;
        } else if (count_zero == 0) {
            res[i] = all_prod/nums[i];
        } else {
            res[i] = all_prod;
        }
    }
    return res;    
        
    }
};
