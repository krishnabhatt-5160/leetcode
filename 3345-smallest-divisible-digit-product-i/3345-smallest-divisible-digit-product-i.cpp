class Solution {
public:
    int smallestNumber(int n, int t) {

        while(true) {

            int pro = 1;
            int num = n;

            while(num > 0) {
                int last = num % 10;
                pro *= last;
                num /= 10;
            }

            if(pro % t == 0)
                return n;

            n++;
        }
    }
};