#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left <= right) {
            int k = left + (right - left) / 2;
            long long count = 0;

            for (int i = 0; i < piles.size(); i++) {
                // Cast to long long before adding
                count += ((long long)piles[i] + k - 1) / k;
            }

            if (count > h) {
                left = k + 1;
            } else {
                right = k - 1;
            }
        }

        return left;
    }
};
