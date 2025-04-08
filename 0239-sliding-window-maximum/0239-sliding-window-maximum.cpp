#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0)
            return {};

        vector<int> leftmax(n);
        vector<int> rightmax(n);

        
        for (int i = 0; i < n; ++i) {
            if (i % k == 0) {
                leftmax[i] = nums[i];
            } else {
                leftmax[i] = max(leftmax[i - 1], nums[i]);
            }
        }

      
        for (int j = n - 1; j >= 0; --j) {
            if ((j + 1) % k == 0 || j == n - 1) {
                rightmax[j] = nums[j];
            } else {
                rightmax[j] = max(rightmax[j + 1], nums[j]);
            }
        }

       
        vector<int> max_sliding_window;
        for (int i = 0; i <= n - k; ++i) {
            max_sliding_window.push_back(max(rightmax[i], leftmax[i + k - 1]));
        }
        return max_sliding_window;
    }
};