class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        int maxi =0;
        long long sum = 0;
        for(auto x:milestones)
        {
            maxi=max(maxi, x);
            sum=sum+x;
        }
        if(maxi > sum-maxi)
        return 2*sum - 2*maxi+1;
        return sum;
    }
};