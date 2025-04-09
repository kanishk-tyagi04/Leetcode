class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int l = 0;
        int h = x;
        
        while (h - l > 1) {
            int mid = l + (h - l) / 2;
            if ((long long)mid * mid <= x) {
                l = mid;
            } else {
                h = mid;
            }
        }

        return l;
    }
};
