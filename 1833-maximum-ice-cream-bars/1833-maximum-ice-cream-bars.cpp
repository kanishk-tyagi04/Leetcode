class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
    int count=0, i=0;
    if(costs[0]>coins) return 0;
     while(coins>0 && i<costs.size()){
        coins-=costs[i];
    if(coins>=0){
            count++;
    }
        i++;
     }
     return count;
    }
};