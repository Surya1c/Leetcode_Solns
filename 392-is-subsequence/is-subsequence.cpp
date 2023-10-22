class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sc = 0, tc = 0;
        string cur = "";
        while (sc < s.size() and tc < t.size()) {
            if (s[sc] == t[tc]) {
                cur += s[sc];
                tc++;
                sc++;
            } else {
                tc++;
            }
        }
        if (cur == s) {
            return true;
        } else {
            return false;
        }
    }
};