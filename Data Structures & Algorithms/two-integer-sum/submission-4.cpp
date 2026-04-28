class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result{};
        bool end = false;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (j != i && nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    end = true;
                    break;
                }
            }
            if (end) {break;}
        }
        return result;
    }
};
