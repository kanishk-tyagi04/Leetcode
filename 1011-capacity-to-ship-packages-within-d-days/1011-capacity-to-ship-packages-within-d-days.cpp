class Solution {
private:
    bool isPossible(vector<int> weights, int capacity, int days){
      
        int weight = 0;
        for(int i = 0; i < weights.size(); i++) {
            if(weights[i] > capacity) {
                return false;
            } 
            else if(weight + weights[i] > capacity) {
                --days;
                weight = weights[i];
            } 
            else {
                weight += weights[i];
            }
        }
        return days > 0;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int totalSum = accumulate(weights.begin(),weights.end(),0);
        int maxWeight = 0;
        // for(int i = 0; i < weights.size(); i++) {
        //     totalSum += weights[i];

        // }

        int min =  totalSum / days;
        int max = totalSum;

        while(min < max) {
            int capacity = (min + max) / 2;
            if(isPossible(weights, capacity, days)) {
                max = capacity;
            } else {
                min = capacity + 1;
            }
        }

        return min                                                                                                                                                                                                                                                                                                                                                                                                                                                  ;
    }
};

