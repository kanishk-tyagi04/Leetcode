#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> unique_elements(nums.begin(), nums.end());
        int k = unique_elements.size();

        int start = 0, end = 0, count = 0;
        unordered_map<int, int> freq;

        while (end < n) {
            freq[nums[end]]++;

            while (freq.size() == k) {
                count += (n - end); 
                freq[nums[start]]--;
                if (freq[nums[start]] == 0)
                    freq.erase(nums[start]);
                start++;
            }

            end++;
        }

        return count;
    }
};
