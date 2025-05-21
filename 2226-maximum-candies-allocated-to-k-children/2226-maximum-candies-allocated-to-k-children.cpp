class Solution {
public:
    bool isPossible(vector<int>& candies, long long k, int mid){
        long long count=0;
       for(int candy : candies){
          count += (candy / mid);
       }
       return(count>=k);
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long total_sum=accumulate(candies.begin(),candies.end(),0);
        if(total_sum<(long long)k) return 0;
        int min=1;
        int max=*max_element(candies.begin(),candies.end());
        while(min<=max)
        {
            int mid=min+(max-min)/2;
            if(isPossible(candies,k, mid)){
                min=mid+1;
            }
            else{
                max=mid-1;
            }
        }
        return max;
    }
};