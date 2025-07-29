class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>>nums(n);
        for(int i=0;i<n;i++){
            nums[i].first=speed[i];
            nums[i].second=efficiency[i];
        }
    sort(nums.begin(), nums.end(),[](const pair<int,int>&a, const pair<int,int>&b){
        return a.second>b.second;
    });
      
      priority_queue<int,vector<int>, greater<int>>minHeap;

      long long performance=0;
      long long sum=0;

      for(auto&pair : nums){
        minHeap.push(pair.first);
        sum += pair.first;
        if(minHeap.size() > k) {
                sum -= minHeap.top();
                minHeap.pop();
            }
            performance = max(performance, sum*pair.second);
      }
      return performance%1000000007;
    }
};