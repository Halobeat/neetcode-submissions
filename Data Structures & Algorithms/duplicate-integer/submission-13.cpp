class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp{};
        int prev_size{};
        for (const auto &x:nums) {
            mp.insert({x,x});
            prev_size++;
            if (prev_size != mp.size()) {
                return true;
            }
        }
       return false;
    }
};