class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        if (nums.size() == 1) return 0;

        int max = nums[0];

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > max) {
                max = nums[i];
            }

            int min = nums[i];

            for (int j = i; j < nums.size(); j++) {
                if (nums[j] < min) {
                    min = nums[j];
                }
            }

            int diff = max - min;

            if (diff <= k) {
                return i;
            }
        }

        return -1;
    }
};