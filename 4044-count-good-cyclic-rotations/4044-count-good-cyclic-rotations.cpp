class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        
        long long n=nums.size();
        if(n==0)return 0;
        
        long long leftsum=0,rightsum=0;
        for(int i=0;i<n/2;i++)
        {
            leftsum+=nums[i];
            rightsum+=nums[n-1-i];
        }
        int count=0;
        int half=n/2;
        for(int i=0;i<n;i++)
        {
            if(leftsum>rightsum)count++;
            int left = nums[i];
            int right = nums[(i + half) % n];
            leftsum = leftsum - left + right;
            rightsum = rightsum - right + left;
        }
        return count;
    }
};