class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>result;
        int max = *max_element(candies.begin(), candies.end());
        vector<int>temp(candies.size(),0);
        for(int i=0;i<candies.size();i++){
            temp[i]=candies[i]+extraCandies;
        }
        for(int i=0;i<candies.size();i++){
            result.push_back(temp[i] >= max);
        }

         return result;
    }
};