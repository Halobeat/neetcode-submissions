class Solution {
public:
    string commonPrefix(string s, string t) {
        string result{};
        int k = min(s.length(), t.length());
        for (int i = 0; i < k; i++) {
            if (s[i] == t[i]) {
                string p(1,s[i]);
                result.append(p);
            } else {
                return result;
            }
        } 
        return result;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0) return "";
        string result = strs[0];
        for (int i = 1; i < n; i++) {
            result = commonPrefix(result, strs[i]);
            if (result == "") return "";
        }
        return result;
    }
};