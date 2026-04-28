class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp{};
        int prev_size{};
        for (const auto &x:nums) {
            if (mp.contains(x)) {
                return true;
            }
            mp.insert({x,x});
        }

       return false;
    }
};