class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>um;
        vector<int>result;
       
        for(int n:arr1){
           um[n]++;
        }
        for(int n : arr2){
            while(um[n]>0){
                result.push_back(n);
                um[n]--;
            }
        }
        vector<int>remaining;
        for(auto it:um){
            while(it.second>0){
              remaining.push_back(it.first);
              it.second--;
            }
           
        }
         sort(remaining.begin(), remaining.end());
            for(int n:remaining){
                result.push_back(n);
            }
        return result;
    }
};