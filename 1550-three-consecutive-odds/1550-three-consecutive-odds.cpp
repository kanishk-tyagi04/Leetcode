class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i=0;
        if(arr.size()<3) return false;
        while(i<=arr.size()-3){
             
                if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                    return true;
                }
             
             i++;
        }
        return false;
    }
};