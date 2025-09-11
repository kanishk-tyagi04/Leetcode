class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n=startTime.size();
        vector<vector<int>>jobs(n,vector<int>(3));
        for(int i=0;i<n;i++){
            jobs[i][0]=startTime[i];
            jobs[i][1]=endTime[i];
            jobs[i][2]=profit[i];
        }
        sort(jobs.begin(),jobs.end(), [](auto &a, auto &b){
            return a[1]<b[1];
        });
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            nums[i]=jobs[i][1];
        }
        vector<int>dp(n,0);
        dp[0]=jobs[0][2];
        for(int i=1;i<n;i++){
            int take=jobs[i][2];
            int index=upper_bound(nums.begin(),nums.end(),jobs[i][0])-nums.begin()-1;
            if(index>=0) take += dp[index];
            int not_take=dp[i-1];
            dp[i]=max(take,not_take);
        }
        return dp[n-1];
    }
};