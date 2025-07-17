class Solution {
public:
    bool isPossible(vector<int>& weights,int days, int capacity){
        int sentItems=0;
        for(int i=0;i<weights.size();i++){

            if(weights[i]>capacity)return false;
          
            if(sentItems+weights[i]>capacity){
                --days;
                 sentItems=weights[i];
            }
            else{
              sentItems+=weights[i];
            }
        }
        return days>0;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int totalSum=accumulate(weights.begin(),weights.end(),0);
        int max=totalSum;
        int min=totalSum/days;
        while(min<max){
            int mid=min+(max-min)/2;
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