class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> result{};
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] != val) {
                result.push_back(nums[i]);
            }
        }
        nums = result;
        return result.size();   
    }
};