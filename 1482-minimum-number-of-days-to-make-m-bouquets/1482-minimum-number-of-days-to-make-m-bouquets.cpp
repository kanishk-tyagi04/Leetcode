class Solution {
public:
    int isPossible(vector<int>& bloomDay, int m, int k, int D){
        int count=0;
        int bouquet=0;
        for(int day:bloomDay){
            if(day<=D){
                count++;
                if(count==k){
                    bouquet++;
                    count=0;
                }
                }else{
                    count=0;
                }
        }
        return bouquet>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       // if((long long)m*k>bloomDay.size())return -1;
        int min= *min_element(bloomDay.begin(), bloomDay.end());
        int max= *max_element(bloomDay.begin(), bloomDay.end());
        
        while(min<max){
            int mid=min+(max-min)/2;
            if(isPossible(bloomDay,m,k,mid)){
                max=mid;
            }
            else{
                min=mid+1;
            }
        }
        return min;
    }
};