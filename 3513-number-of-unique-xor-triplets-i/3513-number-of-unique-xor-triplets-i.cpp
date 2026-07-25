#include <bits/stdc++.h>
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
      int n=  nums.size();
        if (nums.size()<=2) return nums.size();
       else{
        return 1<<((int)log2(n)+1);
       }
        
    }
};