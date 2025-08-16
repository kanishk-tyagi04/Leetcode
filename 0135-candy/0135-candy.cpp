class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        vector<int>candies(n,1);
        for(int i=1;i<n;i++){
               if(arr[i]>arr[i-1]){
                candies[i]=candies[i - 1] + 1;
               }
        }
        for(int j=n-2;j>=0;j--){
            if(arr[j]>arr[j+1]){
                candies[j]=max(candies[j], candies[j+1] + 1);
            }
        }
        int result=accumulate(candies.begin(),candies.end(),0);
        return result;
    }
};