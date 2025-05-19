#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
   
    bool isPossible(const std::vector<int>& batteries, int n, long long mid) {
        long long total = 0;
        long long goal = n * mid;

        for (const auto& battery : batteries) {
            total += min(mid, (long long)battery);
           //total += (long long)battery;
            //if (total >= goal) return true; 
        }

        return total >= goal;
    }

    long long maxRunTime(int n, std::vector<int>& batteries) {
        long long minimum = *min_element(batteries.begin(), batteries.end());
        long long maximum = accumulate(batteries.begin(), batteries.end(), 0LL)/n;

        while (minimum <= maximum) {
            long long mid = (minimum + maximum) / 2;
            if (isPossible(batteries, n, mid)) {
                minimum = mid + 1; 
            } else {
                maximum = mid - 1; 
            }
        }

        return maximum;
    }
};
