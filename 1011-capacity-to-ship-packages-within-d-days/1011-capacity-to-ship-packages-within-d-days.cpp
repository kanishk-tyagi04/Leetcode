class Solution {
public:
    int isPossible(vector<int>&weights, int days, int capacity){
        int weight=0;
        for(int num:weights){
            if(num>capacity){
                return false;
            }
            if(weight+num>capacity)
            {
                --days;
                weight=num;
            }
            else{
                weight+=num;
            }
        }
        return days>0;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int total_sum = accumulate(weights.begin(), weights.end(), 0);
        int max=total_sum;
        int min=total_sum/days;
        while(min<max){
            int mid=(min+(max-min)/2);
            if(isPossible(weights,days,mid)){
                max=mid;
            }
            else{
                min=mid+1;
            }
        }
        return max;
    }
};