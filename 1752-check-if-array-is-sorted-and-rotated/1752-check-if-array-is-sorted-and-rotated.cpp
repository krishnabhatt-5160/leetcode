class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> v = nums;

        
        sort(v.begin(), v.end());

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (v == nums)
                return true;

            rotate(v.begin(), v.begin() + 1, v.end());
        }

        return false;
    }
};