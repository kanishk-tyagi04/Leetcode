class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result(prices.size());
        for(int i=0;i<prices.size();i++){
            bool discount=false;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    result[i] = prices[i]-prices[j];
                    discount = true;
                    break;
                }

                
                    
            }
            if(!discount){
                result[i]=prices[i];
            }
            
            
            
        }
        return result;
        
    }
};