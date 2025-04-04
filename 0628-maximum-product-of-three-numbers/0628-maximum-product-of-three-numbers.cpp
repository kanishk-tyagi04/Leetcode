class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int maxP=1;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        maxP=arr[n-1] * arr[n-2] * arr[n-3];
        int option2 = arr[0] * arr[1] * arr[n-1];
        return max(maxP,option2);
    }
};