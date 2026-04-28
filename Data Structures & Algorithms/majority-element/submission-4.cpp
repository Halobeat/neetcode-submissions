class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> hs{};
        for (const auto x: nums) {
            if (hs.find(x) == hs.end()) {
                hs.insert({x,1});
            } else {
                hs[x]++;
            }
        }
        int max_freq = 0;
        int max_key = 0;
        for (const auto &[key, value] : hs) {
            if (value > max_freq) {
                max_key = key;
                max_freq = value;
            }
        }
        return max_key;

    }
};