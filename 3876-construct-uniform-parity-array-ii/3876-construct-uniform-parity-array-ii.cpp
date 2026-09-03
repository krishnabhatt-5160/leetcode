class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        int countodd = 0;
        int counteven = 0;

        int minodd = INT_MAX;
        int mineven = INT_MAX;

        for (int i = 0; i < n; i++) {

            if (nums1[i] % 2 == 0) {
                counteven++;

                if (nums1[i] < mineven) {
                    mineven = nums1[i];
                }
            }
            else {
                countodd++;

                if (nums1[i] < minodd) {
                    minodd = nums1[i];
                }
            }
        }

        if (countodd == n || counteven == n) {
            return true;
        }

        if (minodd < mineven) {
            return true;
        }

        return false;
    }
};