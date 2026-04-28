class Solution {
public:
    bool isAnagram(string s, string t) {
        int Slength = s.length();
        int Tlength = t.length();
        for (int i = 0; i < Slength-1; i++) {
            for (int j = i+1; j < Slength;j++) {
                if (s[i] > s[j]) {
                    std::swap(s[i],s[j]);
                }
            }
        }
        for (int i1= 0; i1< Tlength-1; i1++) {
            for (int j1 = i1+1; j1 < Tlength;j1++) {
                if (t[i1] > t[j1]) {
                    std::swap(t[i1],t[j1]);
                }
            }
        }
        return s == t;
    }
};
