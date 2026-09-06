class Solution {
public:
    int find(string s, int k) {
        int n = s.size();
        int count = 0;

        for(int r = 0; r < n; r++) {
            int same = 0;
            for(int i = 0; i < n - 1; i++) {
                if(s[i] == s[i + 1]) {
                    same++;
                }
            }

            if(same == k) {
                count++;
            }

            for(int i = 0; i < n - 1; i++) {
                swap(s[i], s[i + 1]);
            }
        }

        return count;
    }

    int countRotations(string s, int k) {
        return find(s, k);
    }
};