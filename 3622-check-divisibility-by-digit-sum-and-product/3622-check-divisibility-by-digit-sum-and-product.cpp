class Solution {
public:
    bool checkDivisibility(int n) {
        int original = n;
        int pro = 1;
        int sum = 0;

        while (n > 0) {
            int last = n % 10;
            sum += last;
            pro *= last;
            n /= 10;
        }

        int x = pro + sum;

        return original % x == 0;
    }
};