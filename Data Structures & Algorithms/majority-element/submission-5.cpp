class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = nums[0];
        int count = 1;
        for (const auto &x: nums) {
            if (res == x) {
                count++;
            } else if (count == 0) {
                res = x;
                count = 1;
            } else {
                count--;
            }
        }
        return res;
    }
};