class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> cnt(26);
        for (char c : s) cnt[c - 'a']++;

        string left;
        char mid = 0;

        for (int i = 0; i < 26; i++) {
            left += string(cnt[i] / 2, 'a' + i);
            if (cnt[i] & 1) mid = 'a' + i;
        }

        string ans = left;
        if (mid) ans += mid;
        reverse(left.begin(), left.end());
        return ans + left;
    }
};