class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(26);
        vector<bool> find(26);
        for (int i = 0; i < s.size(); i++)
            last[s[i] - 'a'] = i;
            string ans = "";
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (find[c - 'a']) continue;
            while (!ans.empty() && ans.back() > c &&
                last[ans.back() - 'a'] > i) {
                find[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            ans += c;
            find[c - 'a'] = true;
        }
        return ans;
    }
};