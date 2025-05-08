class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int cost=0;
        for(int i=n/3;i<n;i=i+2){
           cost += piles[i];
        }
        return cost;
    }
};