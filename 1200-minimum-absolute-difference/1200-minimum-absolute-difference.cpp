class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      int diff=0, minabsdiff=INT_MAX;
      sort(arr.begin(), arr.end());
      for(int i=0;i<arr.size()-1;i++){
         
            diff=abs(arr[i]-arr[i+1]);    
            
            minabsdiff=min(minabsdiff,diff);   
              
      }
      
      vector<vector<int>>result;
      for(int i=0;i<arr.size();i++){
        if((i+1)<arr.size()){
            if(abs(arr[i+1]-arr[i])==minabsdiff){
                result.push_back({arr[i], arr[i+1]});
            }
        }
      }
      return result;
    }
};