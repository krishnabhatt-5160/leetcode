class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for(int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        long long total = prefix[n];
        int count = 0;

        for(int i = 0; i < n; i++) {

            // Take n/2 elements starting from i
            int j = i + n / 2;

            long long first;

            if(j <= n) {
                first = prefix[j] - prefix[i];
            }
            else {
                first = (prefix[n] - prefix[i]) + prefix[j - n];
            }

            long long second = total - first;

            if(first > second) {
                count++;
            }
        }

        return count;
    }
};