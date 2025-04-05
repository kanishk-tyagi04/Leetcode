class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int i=1;
          int d=0;
        sort(arr.begin(),arr.end());
        if(arr.size()>=2){
            d=arr[1]-arr[0];
        }
        while(i<arr.size()){
         int temp=arr[i]-arr[i-1];
         if(temp!=d){
            return false;
         }
         i=i+1;
        }
        return true;
    }
};