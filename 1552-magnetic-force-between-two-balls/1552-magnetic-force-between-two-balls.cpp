#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(int mid, vector<int>& arr, int m) {
        int f_ball = arr[0];
        m--;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - f_ball >= mid) {
                m--;
                f_ball = arr[i];
            }
        }
        return m <= 0;
    }
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int minDist = 1;
        int maxDist = position.back() - position.front();
        
        while (minDist <= maxDist) {
            int mid = (minDist + maxDist) / 2;
            if (isPossible(mid, position, m)) {
                minDist = mid + 1;
            } else {
                maxDist = mid - 1;
            }
        }
        return maxDist;
    }
};
