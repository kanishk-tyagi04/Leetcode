class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> vec(n);
        for (int i=0;i<n;i++) {
            vec[i].first = -growTime[i];
            vec[i].second = plantTime[i];
        }
        sort(vec.begin(), vec.end());
        int total = 0;
        int current = 0;
        for (int i = 0; i < n; i++) {
            total = max(total, current + vec[i].second - vec[i].first);
            current += vec[i].second;
        }
        return total;
    }
};