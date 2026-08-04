class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> result;

        int x = nums.back();   
        int y = nums.front();  

        int j = 0;

        for (int i = y; i <= x; i++) {
            if (j < nums.size() && nums[j] == i) {
                j++; 
            } else {
                result.push_back(i);  
            }
        }

        return result;
    }
};