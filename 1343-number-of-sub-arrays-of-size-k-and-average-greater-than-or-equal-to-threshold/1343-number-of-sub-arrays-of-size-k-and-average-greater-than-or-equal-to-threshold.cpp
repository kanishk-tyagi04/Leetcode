class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=accumulate(arr.begin(),arr.begin()+k,0);
        int avg=sum/k;
        int count=0;
        if(avg>=threshold){
            count++;
        }
        for(int i=k;i<arr.size();i++){
            sum -=arr[i-k];
            sum +=arr[i];
            avg=sum/k;
            if(avg>=threshold){
                count++;
            }
        }
        return count;
    }
};